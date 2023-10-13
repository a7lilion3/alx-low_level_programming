#include "main.h"
#include <stdio.h>

/**
 * check_null - check if it's zero
 * @n: int
 * Return: @n
 */
int check_null(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}

	return (n);
}

/**
 * check_negative - check if the number negative
 * @n: int
 * Return: @n
 */
int check_negative(int n)
{
	if (n <= 0)
	{
		_putchar('-');
	}

	return (n);
}

/**
 * print_number - prints @n
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	int tn, i;

	if (!check_null(n))
		return;

	if (check_negative(n) < 0)
		n = -n;

	tn = n;
	i = 1;
	while (tn >= 10)
	{
		i *= 10;
		tn /= 10;
	}

	tn = n;
	while (tn != 0)
	{
		if (i != 0)
			_putchar('0' + tn / i);
		else
			break;
		tn %= i;
		if (tn == 0 && i != 0)
		{
			i /= 10;
			while (i != 0)
			{
				i /= 10;
				_putchar('0');
			}
		}
		else
			if (i != 0)
				i /= 10;
	}
}
