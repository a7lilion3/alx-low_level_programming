#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: list_t **
 * @str: const char *
 * 
 * Return: list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	int n;
	char *s;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	s = node->str;
	for (n = 0; *s; ++n)
		++s;
	node->len = n;
	node->next = *head;

	*head = node;

	return (node);
}
