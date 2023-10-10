#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all ints from n to 98
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	printf("%d\n", n);
}
