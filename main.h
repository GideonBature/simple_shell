#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <unistd.h>

extern char **environ;
char *lineptr = NULL;


char *_getline(void);
void _strtok(char **argv);
char *_getenv(const char *name);
char *check_cmd(char *argv);
void execve_cmd(char *cmd, char **argv, char **env);
/** char *strtok(char *str, char *sep); */


void clean_up(void);
void sig_int_handler(int sig);

#endif
