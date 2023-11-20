#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: listint_t *
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
