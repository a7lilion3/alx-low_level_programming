#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: const list_t *
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h; ++len)
		h = h->next;

	return (len);
}
