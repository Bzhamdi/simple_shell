#include "shell.h"
/**
 * _which - looks for files in the current PATH.
 * @filename: file name
 * @head: head of linked list.
 * Return:name of the path.
 *
 */
char *_which(char *filename, list_t *head)
{
	char *path;
	int test_path;
	list_t *list = head;
	struct stat lst;

	while (list != NULL)
	{

		path = concat_3_strings(list->str, "/", filename);
		test_path = stat(path, &lst);
		if (test_path == 0)
		{
			return (path);
		}
		free(path);
		list = list->next;


	}

	return (NULL);
}
/**
 * create_pathlist - creates  list of paths.
 * @path: path.
 * Return:linked list.
 *
 */
list_t *create_pathlist(char *path)
{
	list_t *head = NULL;
	char *tokens, *cp = _strdup(path);

	tokens = _strtok(cp, ":");
	while (tokens)
	{
		head = add_node_end(&head, tokens);

		tokens = _strtok(NULL, ":");
	}

	return (head);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to first element.
 * @str: pointer to string.
 *
 *
 * Return: Address of the new element.
 */

list_t *add_node_end(list_t **head, char *str)
{

	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	if (!str)
	{
		new->str = NULL;

	}
	else
	{
		new->str = str;

	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;
	return (*head);
}

