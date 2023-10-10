#include "main.h"

/**
 * print_number - print int numbers
 * @n: n must be less than 100
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 10)
	{
		_putchar(' ');
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
}

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			print_number(i * j);

			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}

			if (i == 0 && j != 9)
			{
				_putchar(' ');
			}
		}
	}
}
