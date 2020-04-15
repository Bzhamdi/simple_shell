#include "shell.h"

/**
 *print_number - function that prints an integer
 *@n: param
 *
 *
 */
void print_number(int n)
{
unsigned int a = n;

if (a / 10 > 0)
{
print_number(a / 10);
}
_putchar(a % 10 + '0');
}

/**
 * exec_cmd - execute command.
 * @cmd:arguments (command).
 *@argv: argv.
 *@l: int
 *@path: path
 */

void exec_cmd(char **cmd, char **argv, int l, char *path)
{
	pid_t child_pid;
	int status;

	if (!cmd || !cmd[0])
		return;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror(_getenv("_"));
	}
	else if (child_pid == 0)
	{

		execve(cmd[0], cmd, environ);

		if (path == NULL)
		{
			_puts(argv[0]);
			_puts(": ");
			print_number(l);
			_puts(": ");
			_puts(cmd[0]);
			_puts(" : command not found\n");
		}
		exit(1);
	}
	else if (child_pid == 1)
	{
		waitpid(child_pid, &status, 0);
		kill(child_pid, SIGTERM);
		exit(99);
	}
	wait(&status);
}
