#include "main.h"

void swap(char *, char *);

/**
 * rev_string - reverses a string
 * @s: char *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = 0; i <= len / 2; i++)
		swap(s + i, s + len - i - 1);
}

/**
 * _strlen - returns length of a string
 * @s: char *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++; i++)
		;
	return (i);
}

/**
 * swap - swap two ints
 * @n: int *
 * @m: int *
 * Return: void
 */
void swap(char *n, char *m)
{
	char t;

	t = *n;
	*n = *m;
	*m = t;
}
