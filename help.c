#include "shell.h"
/**
 *_help - help users.
 *@argv: arguments.
 *
 *
 */
void _help(char **argv)
{

	if (!argv[1])
	{
		_puts("Welcome to BZ's simple shell!.\n");
		_puts("Usage: help [BUILTIN].\n");
	}
	else if (argv[1])
	{

		if (_strcmpr("cd", argv[1]) == 0)
		{
			_puts("Change the shell working directory.\n");
			_puts("Usage: cd <directory>\n");
		}

		else if (_strcmpr("exit", argv[1]) == 0)
		{
			_puts("Exit the BZ shell.\n");
			_puts("Usage: exit\n");

		}
		else if (_strcmpr("env", argv[1]) == 0)
		{
			_puts("Prints the content of BZ enviroment\n");
			_puts("Usage: env\n");

		}
		else if (_strcmpr("help", argv[1]) == 0)
		{
			_puts("Usage: help [BUILTIN]\n");
		}
		else
		{
			_puts("Hello i'm BZ and i'm working on this\n");
		}
	}

}
