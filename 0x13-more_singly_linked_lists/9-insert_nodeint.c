#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t **
 * @idx: unsigned int
 * @n: int
 *
 * Return: listint_t *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *prenode;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	node = *head;
	prenode = NULL;
	for (i = 0; i < idx; ++i)
	{
		if (node == NULL)
			break;
		prenode = node;
		node = node->next;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = node;

	if (prenode != NULL)
		prenode->next = new;

	return (new);
}
