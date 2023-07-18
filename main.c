#include "main.h"

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

void sig_int_handler(int sig)
{
	exit(0);
}

/**
 * _strtok - Tokenize a string
 * @_lineptr: Line pointer from getline
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
