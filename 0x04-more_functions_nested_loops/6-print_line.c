#include "main.h"

/**
 * print_line - print @n of '_'
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
