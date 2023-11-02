#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: void *
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p1, *p2;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p1 = malloc(new_size);
	p2 = (char *) ptr;

	if (p1 == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; ++i)
		p1[i] = p2[i];

	free(ptr);
	return ((void *) p1);
}
