#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: int
 * @height: int
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(ar + i) = malloc(width * sizeof(int));
		if (*(ar + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(ar + j));
			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(ar + i) + j) = 0;

	return (ar);
}
