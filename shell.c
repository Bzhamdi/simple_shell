#include "shell.h"
/**
 * main - Shell
 * Return: 0 on success
 */
int main(void)
{
	unsigned int is_pipe = 0;
	ssize_t len = 0;
	char *buffer = NULL;
	char **argv;
	size_t size = 0;
	char *value, *the_path;
	list_t *head = '\0';
	void (*f)(char **);

	while (1)
	{
		print_prompt(is_pipe);
		signal(SIGINT, sig_handler);
		len = getline(&buffer, &size, stdin);
		_EndOfLine(len, buffer);
		argv = tokenize(buffer, " \n");
		value = _getenv("PATH");
		head = create_pathlist(value);
		the_path = _which(argv[0], head);
		f = verif_built(argv);
		if (f)
		{
			;
		}
		else if (!the_path)
		{
			exec_cmd(argv);
		}
		else if (the_path)
		{
			free(argv[0]);
			argv[0] = the_path;
			exec_cmd(argv);
		}
	}
	free_list(head);
	free(buffer);
	free_argv(argv);
	return (0);
}
