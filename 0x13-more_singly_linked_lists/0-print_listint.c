#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: const lisint_t *
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next, ++i)
		printf("%d\n", h->n);

	return (i);
}
