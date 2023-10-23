#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diags of a square matrix of ints
 * @a: int *
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	unsigned int diagsum1, diagsum2;
	int i;

	diagsum1 = diagsum2 = 0;
	for (i = 0; i < size; ++i)
	{
		diagsum1 += *(a + i * size + i);
		diagsum2 += *(a + i * size + size - i - 1);
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
