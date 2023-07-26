#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_

#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdbool.h>
#include <errno.h>

/**
 * struct env_var - Node for env variables
 * @key: key of Node
 * @value: value of node
 * @next: Pointer to next node or NULL
 *
 * Description: Forms the structure of the linked list
 */
typedef struct env_var
{
	char *key;
	char *value;
	struct env_var *next;
} envstruct;
extern char **environ;
char *lineptr;

void exit_cmd(int);
void env_cmd(void);

void setenv_cmd(char **argv, envstruct *head);
void unsetenv_cmd(char **argv, envstruct *head);
/** void cd_cmd(char **argv); */

void exec_builtin_cmd(char **argv, envstruct *head);
void exec_executable_cmd(char *cmd, char **argv, char **env);


char *_getline(void);
int is_builtin_cmd(char *cmd);
char *_getenv(char *name);
char *check_cmd(char *argv);
void execve_cmd(char *cmd, char **argv, char **env);
char *_strdup(char *str);
/** char *strtok(char *str, char *sep); */
void init_env_list(envstruct *head);
envstruct *insert_end(envstruct *head, char *key, char *value);
char *get_value(envstruct *head, char *key);
int print_all(envstruct *head);
int remove_value(envstruct **head, char *key);
void free_list(envstruct *head);

typedef void (*sighandler_t)(int);

void clean_up(void);
void sig_int_handler(int signum);


#endif
