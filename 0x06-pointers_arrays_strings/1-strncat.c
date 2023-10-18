#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char *
 * @src: char *
 * @n: int
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *t_dest;

	t_dest = dest;

	while (*t_dest)
		t_dest++;

	for (i = 0; (*t_dest = *src) && (i < n); i++)
	{
		t_dest++;
		src++;
	}

	return (dest);
}
