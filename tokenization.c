
#include "shell.h"

/**
 * tokenize - splits a string into an array of pointers.
 * @cmd: the commande to be split.
 * @delim: the delimiter.
 * Return: array of pointers of words.
 *
 */

char **tokenize(char *cmd, const char *delim)
{
      	char *token;
	char **array;
	int i = 0;

	token = _strtok(cmd, delim);
	array = malloc(2048);
	if (array == NULL)
	{
		perror(_getenv("_"));
		exit(2);
	}
	while (token)
	{
		array[i] = strdup(token);
		token = _strtok(NULL, delim);
		i++;
	}

	return (array);
}
