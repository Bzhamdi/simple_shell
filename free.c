#include "shell.h"
/**
 * free_argv - free arguments argv.
 *@argv: arguments.
 *
 */
void free_argv(char **argv)
{
	int i = 0;

	while (argv[i])
		{
		free(argv[i]);
		i++;
		}
	free(argv);
}
/**
 * free_list - frees a list_t.
 *@head: head of linked list.
 *
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}

}
