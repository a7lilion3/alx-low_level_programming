#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and init with a char
 * @size: uint
 * @c: char
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size);
	if (ar == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; ++i)
		ar[i] = c;
	return (ar);
}
