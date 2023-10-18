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
	int is_limited;
	char *t_dest;

	is_limited = 0;
	t_dest = dest;

	while (*t_dest)
		t_dest++;

	for (i = 0; (*t_dest = *src) && (i < n); i++)
	{
		if (i >= n - 1)
			is_limited = 1;

		t_dest++;
		src++;
	}

	if (is_limited)
		*t_dest = '\0';

	return (dest);
}
