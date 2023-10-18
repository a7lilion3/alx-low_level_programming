#include "main.h"

/**
 * reverse_array - it reverses the content of an array of integers
 * @a: int *
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, lim;
	int t;

	lim = n / 2;
	for (i = 0; i < lim; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
