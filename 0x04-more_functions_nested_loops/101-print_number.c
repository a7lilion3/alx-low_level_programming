#include "main.h"

/**
 * print_number - prints @n
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	unsigned int tn, i;


	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	tn = n;
	i = 1;
	while (tn >= 10)
	{
		i *= 10;
		tn /= 10;
	}

	tn = n;
	while (i != 0)
	{
		_putchar('0' + tn / i);
		tn %= i;
		i /= 10;
	}
}
