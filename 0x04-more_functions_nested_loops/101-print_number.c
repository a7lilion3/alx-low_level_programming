#include "main.h"

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
	while (i != 0)
	{
		_putchar('0' + tn / i);
		tn %= i;
		i /= 10;
	}
}
