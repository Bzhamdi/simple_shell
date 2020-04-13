#ifndef SHELL_H
#define SHELL_H
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
extern char **environ;

/**
 * struct list_of_path - path directories
 * @str: string - (malloc'ed path)
 * @next: points to the next node
 */
typedef struct list_of_path
{
	char *str;
	struct list_of_path *next;
} list_t;

/**
 * struct built - cmd commandes..
 * @str:char types.
 * @fn: function.
 *
 */
typedef struct built
{
	char *str;
	void (*fn)(char **);
} built_t;

char *concat_3_strings(char *str1, char *str2, char *str3);
void _puts(char *str);

void free_list(list_t *head);
void sig_handler(int sig);
int _atoi(char *s);
void env(char **arv __attribute__ ((unused)));
void(*verif_built(char **argv))(char **argv);
char *_getenv(const char *name);
list_t *add_node_end(list_t **head, char *str);
list_t *create_pathlist(char *path);
char *_which(char *filename, list_t *head);
void work(char **argv, char *buffer);
char *_strdup(char *str);
void print_prompt(int test);
char **tokenize(char *cmd, const char *delim);
void exec_cmd(char **cmd);
int _strlen(char *s);
void my_exit(char **argv);
void free_argv(char **argv);
void _EndOfLine(int line, char *buffer);
void free_env();

void cd(char **args __attribute__((unused)));
int _strcmpr(char *cmp1, char *cmp2);
char *_strtok(char *str, const char *delim);
#endif
