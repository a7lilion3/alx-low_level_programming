#include "main.h"

/**
 * _puts_recursion - it prints a string
 * @s: char *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s++);
	_puts_recursion(s);
}
