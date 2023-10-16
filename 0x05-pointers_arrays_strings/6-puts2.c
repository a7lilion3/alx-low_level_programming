#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: char *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}

/**
 * _strlen - returns length of a string
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
