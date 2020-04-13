#include "shell.h"
/**
 **_strdup - returns a pointer to a newly allocated.
 *@str: param
 *
 *
 *Return: string
 */
char *_strdup(char *str)
{
	char *ar;
	int j, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(i + 1);
	if (ar == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ar[j] = str[j];
	return (ar);
}
/**
 * _strlen - length of a string.
 * @s: pointer to string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
/**
 *_puts - prints
 *@str: param
 *
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}

}
int _strcmpr(char *cmp1, char *cmp2)
{
	int i = 0;

	while (cmp1[i] == cmp2[i])
	{
		if (cmp1[i] == '\0')
			return (0);
		i++;
	}
	return (cmp1[i] - cmp2[i]);
}
