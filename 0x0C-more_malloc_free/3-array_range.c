#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: int
 * @max: int
 * Return: int *
 */
int *array_range(int min, int max)
{
	int i, n;
	int *p;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	p = malloc(n * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; ++i)
		p[i] = min + i;

	return (p);
}
