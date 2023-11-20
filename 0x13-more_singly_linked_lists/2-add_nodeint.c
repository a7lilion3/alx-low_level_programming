#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: listint_t **
 * @n: const int
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
