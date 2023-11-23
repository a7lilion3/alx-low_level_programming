#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, c;
	int gate = 0;

	for (i = 63; i >= 0; --i)
	{
		c = (n >> i) & 0x1;
		if (c)
			gate = 1;

		if (gate)
			_putchar(c + '0');
	}

	if (gate == 0)
		_putchar('0');
}
