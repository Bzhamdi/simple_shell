#include "shell.h"
/**
 * exec_cmd - execute command.
 * @cmd:arguments (command).
 *
 */

void exec_cmd(char **cmd)
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
		perror(cmd[0]);
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
