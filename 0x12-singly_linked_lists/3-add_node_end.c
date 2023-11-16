#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: list_t **
 * @str: const char *
 *
 * Return: list_t *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *new;
	size_t n;
	char *s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	s = new->str;
	for (n = 0; *s; ++n)
		++s;
	new->len = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (node = *head; node->next; node = node->next)
		;
	node->next = new;

	return (new);
}
