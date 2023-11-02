#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;

	p = malloc(len);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; ++i)
		p[i] = 0;

	return ((void *) p);
}
