#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}

/**
 * _strlen - calculates length of a string
 * @s: char *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++; i++)
		;
	return (i);
}
