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
	list_t node = *h;

	if (h == NULL)
		return (-1);

	len = 0;
	while (1)
	{
		if (node.str)
			printf("[%u] %s\n", node.len, node.str);
		else
			printf("[0] (nil)\n");

		++len;

		if (node.next)
			node = *(node.next);
		else
			break;
	}

	return (len);
}
