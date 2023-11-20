#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: listint_t *
 * @index: unsigned int
 *
 * Return: listint_t *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	
	for (i = 0; i < index; ++i)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
