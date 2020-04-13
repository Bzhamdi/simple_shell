#include "shell.h"
/**
 * concat_3_strings - concat 3 strings with new malloc.
 * @str1: string 1.
 * @str2: string 2.
 * @str3: string 3.
 * Return: string.
 *
 */
char *concat_3_strings(char *str1, char *str2, char *str3)
{
	int len1, len2, len3, i, count;
	char *str;

	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len3 = _strlen(str3);
	str = malloc(len1 + len2 + len3 + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		str[i] = str1[i];
		i++;
	}
	count = i;
	i = 0;
	while (str2[i])
	{
		str[count + i] = str2[i];
		i++;
	}
	count = count + i;
	i = 0;
	while (str3[i])
	{
		str[count + i] = str3[i];
		i++;
	}
	count = count + i;

	str[count] = '\0';
	return (str);
}
