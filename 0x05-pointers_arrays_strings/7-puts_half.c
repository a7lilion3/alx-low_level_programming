#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;
	int n;

	len = _strlen(str);
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * _strlen - return length of a string
 * @str: char *
 * Return: int
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; *str++; i++)
		;
	return (i);
}
