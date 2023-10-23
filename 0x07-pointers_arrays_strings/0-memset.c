#include "main.h"

/**
 * _memset - it fills memory with a const byte
 * @s - char *
 * @b - char
 * @n - unsigned it
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *t = s;

	for (i = 0; i < n; ++i)
		t[i] = b;

	return (s);
}
