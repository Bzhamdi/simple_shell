#include "shell.h"
/**
 * main - Shell
 *@argc: argc
 *@argv: argv
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	unsigned int is_pipe = 0;
	ssize_t len = 0;
	char **arg, *value, *the_path, *buffer = NULL;
	size_t size = 0;
	list_t *head = '\0';
	void (*f)(char **);
	int l = 0;

	while (1)
	{
		print_prompt(is_pipe);
		signal(SIGINT, sig_handler);
		len = getline(&buffer, &size, stdin);
		if (len)
		l++;
		_EndOfLine(len, buffer);
		arg = tokenize(buffer, " \n");
		value = _getenv("PATH");
		head = create_pathlist(value);
		the_path = _which(arg[0], head);
		f = verif_built(arg);
		if (f)
			;
		else if (!the_path)
			exec_cmd(arg, argv, l, the_path);
		else if (the_path)
		{
			free(arg[0]);
			arg[0] = the_path;
			exec_cmd(arg, argv, l, the_path);
		}
	}
	free_list(head);
	free(buffer);
	free_argv(arg);
	free(argv);
	free(the_path);
	free(value);
	return (0);
}

