#include "main.h"
int main(int argc, char **argv, char **env);

/**
 * main - Entrance to program
 * @argc: Argument count
 * @argv: Array of argument values
 * @env: Environment variables
 *
 * Return: Exit code
 */
int main(int argc, char **argv, char **env)
{
	atexit(clean_up);
	signal(SIGINT, sig_int_handler);

	while (1)
	{
		if (isatty(fileno(stdin)))
			printf("$ ");

		_getline();
		/** tokenize here */
		_strtok(argv);

		free(lineptr);
		lineptr = NULL;
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
		exit(1);

	newnumbytes = strcspn(lineptr, "\n");

	if (lineptr[newnumbytes] == '\n')
		lineptr[newnumbytes] = '\0';

	return (lineptr);
}

/**
 * _strtok - Tokenize a string
 * @argv: argument vector from _getline
 *
 * Return: void
 */
void _strtok(char **argv)
{
	int i = 0;
	char *cmd = strtok(lineptr, " ");

	while (cmd)
	{
		argv[i] = cmd;
		/* printf("%s\n", cmd); */
		cmd = strtok(NULL, " ");
		i++;
	}
	argv[i] = NULL;
}

/**
 * _getenv - check for PATH in environ
 * @name: name of the environment variable
 *
 * Return: PATH or NULL
*/

char *getenv_member(const char *name)
{
	int i = 0;

	while (environ[i])
	{
		if (strstr(environ[i], name) == environ[i])
		{
			return (environ[i]);
		}
		i++;
	}
	return (NULL);
}

/**
 * _strdup - duplicates string along their memory size
 * @str: the string to be dublicated
 *
 * Return: string or NULL
*/

char *_strdup(const char *str)
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
 * @argv: argument vector (tokens)
 *
 * Return: void
*/
char *check_cmd(char *cmd)
{
	int dir_len, cmd_len;
	char *path = getenv("PATH");
	
	if (path == NULL)
		return (NULL);

	char *path_dup = strdup(path);
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

	free(dir);
	free(path_dup);
	return (NULL);
}


/**
 * clean_up - frees the lineptr upon exit
 *
 * Return: void
*/
void clean_up(void)
{
	free(lineptr);
	if (isatty(fileno(stdin)))
		printf("\n");
}

/**
 * sig_int_handler - handles the exit signal
 * @sig: the signal passed
 * Return: void
*/

void sig_int_handler(int sig)
{
	exit(0);
}
