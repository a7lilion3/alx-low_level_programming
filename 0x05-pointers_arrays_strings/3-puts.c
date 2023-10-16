#include "main.h"

/**
 * _puts - prints a string
 * @str: char *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
