#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: const listint_t *
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = h->next)
		++i;

	return (i);
}
