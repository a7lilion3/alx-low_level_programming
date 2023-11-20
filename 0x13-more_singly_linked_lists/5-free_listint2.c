#include "lists.h"

/**
 * free_listint - frees a list
 * @head: listint_t *
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	
	free_listint(head->next);

	free(head);
}

/**
 * free_listint2 - frees a list
 * @head: listint_t **
 * Return: void
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
