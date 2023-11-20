#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: listint_t **
 * @index: unsigned int
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prenode;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	prenode = NULL;
	node = *head;
	for (i = 0; i < index; ++i)
	{
		if (node == NULL)
			return (-1);
		prenode = node;
		node = node->next;
	}

	if (i == 0)
	{
		(*head) = node->next;
		free(node);
		return (1);
	}

	prenode->next = node->next;
	free(node);
	return (1);
}
