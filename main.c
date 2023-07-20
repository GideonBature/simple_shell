#include "main.h"
int main(void);

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
		printf("19\n");
label:
		if (isatty(fileno(stdin)))
			printf("$ ");
		
		_getline(); /** lineptr and numbytes accessed and modified from the he    ader file and updated here */

		printf("25\n");
		char *cmd = strtok(lineptr, " ");

		printf("27\n");
		char *argv[100];
		int i = 0;

		printf("31\n");
		if (cmd == NULL)
		{
			free(lineptr);
			free(cmd);
			goto label;
		}

		while (cmd != NULL)
		{
			printf("34\n");
			argv[i] = cmd;
			cmd = strtok(NULL, " ");
			i++;
		}
		argv[i] = NULL;

		if (is_builtin_cmd(argv[0]))
		{
			printf("43\n");
			exec_builtin_cmd(argv);
		}
		else if (argv[0] != NULL)
		{
			printf("32\n");
			exec_executable_cmd(argv[0], argv, environ);
		}
		else
		{
			perror("");
			exit(1);
		}
		free(lineptr);
	}

	lineptr = NULL;
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
		if (isatty(fileno(stdin)))
		{
			perror("");
			exit(1);
		}
		else
		{
			exit(1);
		}
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
 *
 * Return: void
*/
void exec_builtin_cmd(char **argv)
{
	if (strstr(argv[0], "exit") == argv[0])
	{
		exit_cmd();
	}
	if (strstr(argv[0], "env") == argv[0])
	{
		env_cmd();
	}
	if (strstr(argv[0], "setenv") == argv[0])
	{
		setenv_cmd(argv);
	}
	if (strstr(argv[0], "unsetenv") == argv[0])
	{
		unsetenv_cmd(argv);
	}
	if (strstr(argv[0], "cd") == argv[0])
	{
		cd_cmd(argv);
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
	printf("334\n");
	pid_t child_pid;
	int status;

	char *full_path = check_cmd(cmd);

	if (full_path != NULL)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("");
			exit(1);
		}
		else if (child_pid == 0)
		{
			execve_cmd(full_path, argv, envp);
			perror("");
			exit(1);
		}
		else
		{
			waitpid(child_pid, &status, 0);
		}
	}
	free(full_path);
}

/**
 * exit_cmd - exits/terminates the shell
 *
 * Return: void
*/
void exit_cmd(void)
{
	exit(0);
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
 * setenv_cmd - sets environment variable
 * @argv: argument vector
 *
 * Return: void
*/
void setenv_cmd(char **argv)
{

}

/**
 * unsetenv_cmd - remove environment variable set
 * @argv: argument vector
 *
 * Return: void
*/
void unsetenv_cmd(char **argv)
{

}

/**
 * cd_cmd - change directory
 * @argv: argument vector
 *
 * Return: void
*/
void cd_cmd(char **argv)
{

}



/**
 * _strdup - duplicates string along their memory size
 * @str: the string to be dublicated
 *
 * Return: string or NULL
*/
char *_strdup(char *str)
{
	printf("251\n");
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
	if (cmd[0] == '/')
	{
		if (access(cmd, X_OK) == 0)
		{
			return (cmd);
		}
	}
	else
	{
		printf("279\n");
		int dir_len, cmd_len;
		char *path = getenv("PATH");

		if (path == NULL)
			return (NULL);

		char *path_dup = _strdup(path);
		char *dir = strtok(path_dup, ":");

		while (dir)
		{
			dir_len = strlen(dir);
			cmd_len = strlen(cmd);
			char *full_path;

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
			dir = strtok(NULL, ":");
		}
		free(path_dup);
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
	printf("324\n");
	if (execve(cmd, argv, envp) == -1)
	{
		perror("");
		exit(0);
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

void sig_int_handler(int signum)
{
	if (isatty(fileno(stdin)))
		printf("\n");
	exit(1);
}
