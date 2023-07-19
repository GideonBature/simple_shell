#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


extern char **environ;
char *lineptr = NULL;

void exit_cmd(void);
void env_cmd(void);
void setenv_cmd(char *argv);
void unsetenv_cmd(char *argv);
void cd_cmd(char *argv);
void exec_builtin_cmd(char **argv, char **env);
void exec_executable_cmd(char **argv, char **env);


char *_getline(void);
void _strtok(char **argv);
int is_builtin_cmd(char *cmd);
char *_getenv(const char *name);
char *check_cmd(char *argv);
void execve_cmd(char *cmd, char **argv, char **env);
/** char *strtok(char *str, char *sep); */


void clean_up(void);
void sig_int_handler(int sig);

#endif
