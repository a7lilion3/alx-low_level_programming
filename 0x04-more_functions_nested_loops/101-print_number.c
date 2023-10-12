#include "main.h"
#include <stdio.h>

/**
 * print_number - prints @n
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	int tn;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	tn = 0;
	while (1)
	{
		tn += (n % 10);
		n /= 10;
		if (n != 0)
			tn *= 10;
		else
			break;
	}

	n = tn;
	while (n != 0)
	{
		_putchar('0' + n % 10);
		n /= 10;
	}
}
