#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include  <string.h>
#include  <signal.h>

void clean_up(void);
void sig_int_handler(int sig);

char *_getline(void);
void _strtok(char **argv);
/** char *strtok(char *str, char *sep); */

char *lineptr = NULL;
#endif
