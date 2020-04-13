#include "shell.h"
/**
 * _strchr - locates a char in string.
 * @c: char.
 * @delim: string.
 *
 *
 * Return: 1 match or 0 not.
 */
 int _strchr(char c, const char *delim)
{
	 int i = 0;

	while (delim[i])
	{
		if (c == delim[i])
			return (1);
i++;
}
	return (0);
}
/**
 *_check _strchr - check for strchr.
 * @str:string.
 * @delim: delimiter.
 * Return: lenth of string.
*/

int _check_strchr(char *str, const char *delim, int a)
{
         int i = 0;
        while (str[i] != '\0')
        {
                if (_strchr(str[i], delim) == a)
                        break;
        i++;
        }
        return (i);
}

/**
 * _strtok -  split a string.
 * @str: string.
 * @delim: delimiter.
 *
 * Return: splited string.
 *
 */
char *_strtok(char *str, const char *delim)
{
	static char *tok1, *tok2;
	int a = 0, b = 0;

	if (str != NULL)
		tok2 = str;
	tok1 = tok2;
	if (tok1 == NULL)
		return (NULL);

	a = _check_strchr(tok2, delim, 0);
	if (tok2[a] == '#' || tok2[a] == '\0')
	{
		return (NULL);
	}
	tok1 = tok2 + a;
	tok2 = tok1;

	b = _check_strchr(tok2, delim, 1);
	if (tok2[b] == '\0')
		tok2 = NULL;
	else
	{
		tok2[b] = '\0';
		tok2 = tok2 + b + 1;
	/*	if (*next_token == '\0')
			next_token = NULL;*/
	}
	return (tok1);
}
