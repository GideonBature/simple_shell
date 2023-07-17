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
	char *_lineptr = NULL;

	while (1)
	{
		printf("$ ");
		_lineptr = _getline();
		/** tokenize here */
		_strtok(_lineptr);
		free(_lineptr);
	}

	return (0);
}

/**
 * _strtok - Tokenize a string
 * @_lineptr: Line pointer from getline
 */
void _strtok(char *_lineptr)
{
	char *cmd = strtok(_lineptr, " ");

	while (cmd)
	{
		printf("%s\n", cmd);
		cmd = strtok(NULL, " ");
	}
}

/**
 * _getline - Get line conditions
 *
 * Return: Characters from stdin
 */
char *_getline(void)
{
	size_t numbytes = 0, newnumbytes;
	char *lineptr = NULL;
	ssize_t linelen;

	linelen = getline(&lineptr, &numbytes, stdin);

	if (linelen == -1)
		exit(1);
	newnumbytes = strcspn(lineptr, "\n");
	if (lineptr[newnumbytes] == '\n')
		lineptr[newnumbytes] = '\0';
	return (lineptr);
}
