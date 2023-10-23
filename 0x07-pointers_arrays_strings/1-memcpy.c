#include "main.h"

/**
 * _memcpy - it copies memory area
 * @dest: char *
 * @src: char *
 * @n: unsigned int
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *t = dest;

	for (i = 0; i < n; ++i)
		*t++ = *src++;
	return (dest);
}
