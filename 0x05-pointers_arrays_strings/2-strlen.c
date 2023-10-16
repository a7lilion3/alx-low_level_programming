#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: char *
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++; i++)
		;

	return (i);
}
