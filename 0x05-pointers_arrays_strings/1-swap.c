#include "main.h"

/**
 * swap_int - swap a and b
 * @a: int *
 * @b: int *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
