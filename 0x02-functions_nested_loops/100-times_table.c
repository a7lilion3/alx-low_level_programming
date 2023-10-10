#include "main.h"

/**
 * print_number - print an integer
 * @i: integer
 * Return: void
 */
void print_number(int i)
{
	int n = 100;
	int zenable = 0;

	while (n != 1)
	{
		if (i / n != 0)
		{
			zenable = 1;
			_putchar('0' + i / n);
		}
		else if (zenable)
			_putchar('0');
		i %= n;
		n /= 10;
	}
	_putchar('0' + i);
}

/**
 * spaces - check how manu spaces we need
 * @i: integer
 * Return: integer (nspaces)
 */
int spaces(int i)
{
	if (i < 10)
		return (3);
	else if (i < 100)
		return (2);
	else
		return (1);
}

/**
 * print_times_table - print a times table formatted
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;
	int mult;
	int nspace;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = i * j;
			if (j != 0)
			{
				nspace = spaces(mult);
				for (k = 0; k < nspace; k++)
				{
					_putchar(' ');
				}
			}

			print_number(mult);
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
