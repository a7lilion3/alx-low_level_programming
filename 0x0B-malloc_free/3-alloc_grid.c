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
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
			return (NULL);

		for (j = 0; j < width; ++j)
			arr[i][j] = 0;
	}

	return (arr);
}
