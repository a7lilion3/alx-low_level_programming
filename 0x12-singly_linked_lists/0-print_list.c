#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a linked list
 * @h: const list_t *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t len;

	for (len = 0; h; ++len)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}

	return (len);
}
