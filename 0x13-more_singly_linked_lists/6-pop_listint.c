#include "lists.h"

/**
 * pop_listint - deletes the head node of a list, and returns the head's data
 * @head: listint_t **
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	int n;
	listint_t *node;

	node = *head;
	*head = node->next;

	n = node->n;
	free(node);

	return (n);
}
