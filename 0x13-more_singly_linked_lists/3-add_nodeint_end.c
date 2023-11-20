#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: listint_t **
 * @n: const int
 * Return: listint_t *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tlist;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (tlist = *head; tlist->next; tlist = tlist->next)
		;
	tlist->next = new;

	return (new);
}
