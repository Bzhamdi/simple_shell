#include "shell.h"

/**
 * my_exit - exits the shell with (program).
 * @argv: arguments.
 *
 */
void my_exit(char **argv)
{
	int status;

	if (_strcmpr(argv[0], "exit") == 0 && argv[1] != NULL)
	{
		status = _atoi(argv[1]);
		if (status <= -1)
			status = 2;
		free_argv(argv);
		exit(status);
	}

	free_argv(argv);
	exit(0);
}
