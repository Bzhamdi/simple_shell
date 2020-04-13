#include "shell.h"
/**
 *_atoi - covert string to int
 *@s: sting
 *
 *Return: int
 */
int _atoi(char *s)
{
	int i, k, a;

	i = 0;
	a = 1;
	k = 0;
	if (*s == '\0')
		return (0);
	for (i = 0 ; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
		{
			a = -a;
		}
	}
	for (i = 0 ; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
		{
			k = k * 10;
			k = k + s[i] - '0';
			if (s[i + 1] >= '0' && s[i] <= '9' && s[i] != '\0')
				continue;
			else
				break;
		}
	}
	return (k * a);
}
