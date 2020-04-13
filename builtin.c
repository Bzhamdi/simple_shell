#include "shell.h"

/**
* verif_built - checks if the command is a builtin.
* @argv: argument.
* Return: function.
*/
void(*verif_built(char **argv))(char **argv)
{

	int i = 0;
	built_t T[] = {
		{"exit", my_exit},
		{"env", env},
		{"cd", cd},
		{"help", _help},
		{NULL, NULL}
	};

	for (i = 0; T[i].fn != NULL; i++)
	{
		if (_strcmpr(argv[0], T[i].str) == 0)
			break;
	}
	if (T[i].fn != NULL)

		T[i].fn(argv);

	return (T[i].fn);
}



