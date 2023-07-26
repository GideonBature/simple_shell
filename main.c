#include "main.h"
int main(void);

char *lineptr = NULL;

/**
 * main - Entrance to program
 *
 * Return: Exit code
 */
int main(void)
{
	atexit(clean_up);
	signal(SIGINT, sig_int_handler);

	while (1)
	{
		envstruct *head = NULL;
		/** init_env_list(head); */
		char *cmd;
		char *argv[100];
		int i = 0;
label:
		if (isatty(fileno(stdin)))
			write(1, "$ ", 2);

		_getline();

		cmd = strtok(lineptr, " \t\n");

		if (cmd == NULL)
		{
			free(lineptr);
			goto label;
		}

		while (cmd != NULL)
		{
			argv[i] = cmd;
			cmd = strtok(NULL, " \t\n");
			i++;
		}
		argv[i] = NULL;

		if (is_builtin_cmd(argv[0]) == 1)
		{
			exec_builtin_cmd(argv, head);
		}
		else if (is_builtin_cmd(argv[0]) == 0)
		{
			exec_executable_cmd(argv[0], argv, environ);
		}
		else
		{
			perror(" ");
			if (lineptr != NULL)
				free(lineptr);
			exit(127);
		}
		if (lineptr != NULL)
			free(lineptr);
	}
	return (0);
}


/**
 * _getline - Get line conditions
 *
 * Return: Characters from stdin
 */
char *_getline(void)
{
	size_t numbytes = 0, newnumbytes;
	ssize_t linelen;

	linelen = getline(&lineptr, &numbytes, stdin);

	if (linelen == -1)
	{
		if (feof(stdin))
		{
			if (isatty(fileno(stdin)))
			{
				write(1, "\n", 1);
			}
			exit(0);
		}
		perror("");
		exit(1);
	}

	newnumbytes = strcspn(lineptr, "\n");

	if (lineptr[newnumbytes] == '\n')
		lineptr[newnumbytes] = '\0';

	return (lineptr);
}


/**
 * is_builtin_cmd - checks for lists of built-in command
 * @cmd: the command checked
 *
 * Return: 0 or 1
 */
int is_builtin_cmd(char *cmd)
{
	int i = 0;
	const char *builtins[5] = {"exit", "env", "setenv", "unsetenv", "cd"};

	while (i < 5)
	{
		if (strstr(cmd, builtins[i]) == cmd)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * exec_builtin_cmd - execute builtin commands
 * @argv: argument vector - points to arguments entered
 * @head: head of lists.
 *
 * Return: void
 */
void exec_builtin_cmd(char **argv, envstruct *head)
{
	if (strstr(argv[0], "exit") == argv[0])
	{
		if (argv[1] != NULL)
			exit_cmd(atoi(argv[1]));
		else
			exit_cmd(0);
	}
	if (strstr(argv[0], "env") == argv[0])
	{
		env_cmd();
	}
	if (strstr(argv[0], "setenv") == argv[0])
	{
		setenv_cmd(argv, head);
	}
	if (strstr(argv[0], "unsetenv") == argv[0])
	{
		unsetenv_cmd(argv, head);
	}
	if (strstr(argv[0], "cd") == argv[0])
	{
		if (cd_cmd(argv) == -1)
		{
			perror("");
		}
	}
}

/**
 * exec_executable_cmd - execute the executable commands
 * @cmd: command
 * @argv: argument variable
 * @envp: argument variable
 *
 * Return: void
 */
void exec_executable_cmd(char *cmd, char **argv, char **envp)
{
	char *full_path;
	pid_t child_pid;
	int status;

	full_path = check_cmd(cmd);

	if (full_path == NULL)
	{
		return;
	}

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("");
		exit(1);
	}
	else if (child_pid == 0)
	{
		execve_cmd(full_path, argv, envp);
	}
	else
	{
		wait(&status);
	}

	if ((full_path != NULL) && (full_path != cmd))
	{
		free(full_path);
		full_path = NULL;
	}
}

/**
 * exit_cmd - exits/terminates the shell
 * @exit_code: exit status code
 *
 * Return: void
 */
void exit_cmd(int exit_code)
{
	exit(exit_code);
}

/**
 * env_cmd - lists all environment variables
 *
 * Return: void
 */
void env_cmd(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}

/**
 * init_env_list - Intialise environment variables
 * @head: head node
 */
void init_env_list(envstruct *head)
{
	while (environ != NULL)
	{
		char *key = strtok(*environ, "="), *val = strtok(NULL, "=");

		head = insert_end(head, key, val);
		environ++;
	}
}

/**
 * setenv_cmd - sets environment variable
 * @argv: argument vector
 * @head: head node
 */
void setenv_cmd(char **argv, envstruct *head)
{
	if (argv != NULL)
	{
		if ((*(argv + 1) != NULL) && (*(argv + 2) != NULL))
		{
			head = insert_end(head, *(argv + 1), *(argv + 2));
			print_all(head);
		}
		else
			perror("setenv_cmd insert Error");
	}
}

/**
 * unsetenv_cmd - remove environment variable set
 * @argv: argument vector
 * @head: head node
 */
void unsetenv_cmd(char **argv, envstruct *head)
{
	if (argv != NULL)
	{
		if ((*(argv + 1) != NULL))
		{
			remove_value(&head, *(argv + 1));
			print_all(head);
		}
		else
			perror("setenv_cmd remove Error");
	}
}

/**
 * cd_cmd - change directory
 * @argv: argument vector
 *
 * Return: void
 */
int cd_cmd(char **argv)
{
	int stat;

	stat = chdir(argv[1]);

	if (stat == -1)
	{
		perror("");
		return (-1);
	}
	return (0);

}

/**
 * _strdup - duplicates string along their memory size
 * @str: the string to be dublicated
 *
 * Return: string or NULL
 */
char *_strdup(char *str)
{
	int str_len;
	char *new_str;

	str_len = strlen(str) + 1;

	new_str = malloc(str_len * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}


/**
 * check_cmd - check cmd whether inbuilt or executable
 * @cmd: commands (tokens)
 *
 * Return: void
 */
char *check_cmd(char *cmd)
{
	if (cmd[0] == '/' || cmd[0] == '.')
	{
		if (access(cmd, X_OK) == 0)
		{
			return (cmd);
		}
		else
		{
			perror("");
			exit(1);
		}
	}
	else
	{
		int dir_len, cmd_len;
		char *dir;
		char *path_dup;
		char *path = getenv("PATH");
		char *full_path = NULL;

		if (path == NULL)
			return (NULL);


		path_dup = _strdup(path);
		dir = strtok(path_dup, ":");

		while (dir)
		{
			dir_len = strlen(dir);
			cmd_len = strlen(cmd);

			full_path = malloc((dir_len + cmd_len + 2) * sizeof(char));

			if (full_path == NULL)
			{
				free(full_path);
				free(path_dup);
				return (NULL);
			}

			strcpy(full_path, dir);
			strcat(full_path, "/");
			strcat(full_path, cmd);

			if (access(full_path, X_OK) == 0)
			{
				free(path_dup);
				return (full_path);
			}

			free(full_path);
			full_path = NULL;
			dir = strtok(NULL, ":");
		}
		free(full_path);
		free(path_dup);
		path_dup = NULL;
	}

	return (NULL);
}

/**
 * execve_cmd - execute the commands
 * @cmd: command
 * @argv: argument variable
 * @envp: argument variable
 *
 * Return: void
 */
void execve_cmd(char *cmd, char **argv, char **envp)
{
	if (execve(cmd, argv, envp) == -1)
	{
		perror("");
		exit(1);
	}
}

/**
 * clean_up - frees the lineptr upon exit
 *
 * Return: void
 */
void clean_up(void)
{
	if (lineptr != NULL)
		free(lineptr);
}

/**
 * sig_int_handler - handles the exit signal
 * @signum: the signal passed
 *
 * Return: void
 */

void sig_int_handler(int signum __attribute__((unused)))
{
	if (isatty(fileno(stdin)))
		printf("\n");
	exit(0);
}
