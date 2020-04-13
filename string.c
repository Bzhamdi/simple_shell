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
/**
 * concat_all - concat 3 strings with new malloc.
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
if (s[i] >= '0' && s[i] <= '9'&& s[i] != '\0')
{
k = k * 10;
k = k + s[i] - '0';
if (s[i + 1] >= '0' && s[i] <= '9' && s[i] != '\0')
continue;
else
break;
}
}
return (k *a);
}

int _strcmpr(char *cmp1, char *cmp2)
{
	int i =0;

	while (cmp1[i] == cmp2[i])
	{
		if (cmp1[i] == '\0')
			return (0);
		i++;
	}
	return (cmp1[i] - cmp2[i]);
}
