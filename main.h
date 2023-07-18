#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

char *lineptr = NULL;

char *_getline(void);
void _strtok(char **argv);
void check_cmd(char **argv);
/** char *strtok(char *str, char *sep); */


void clean_up(void);
void sig_int_handler(int sig);

#endif
