#include "shell.h"
/**
 * _getenv - gets the value of the global variable
 * @name: name of the global variable
 * Return: string of value
 */
char *_getenv(const char *name)
{
	int i = 0, j;
	char *value;

	if (!name)
		return (NULL);
	while (environ[i])
	{
		j = 0;
		if (name[j] == environ[i][j])
		{
			while (name[j])
			{

				j++;
			}
				value = (environ[i] + 1);
				return (value);

		}
	i++;
	}
	return (0);
}

/**
 * env - prints the current environment
 *
 */
void env(char **arv __attribute__ ((unused)))
{

	int i = 0;

	while (environ[i])
	{
		_puts(environ[i]);
		_puts("\n");
	i++;
	}

}


/**
 * cd - function cd.
 * @args: arguments.
 *
 */
void cd(char **args __attribute__((unused)))
{
	char *nom = getenv("_");

	if (args[1] == NULL)
		perror(nom);
	else
	{

		if (chdir(args[1]) != 0)
			perror(nom);

	}
}



