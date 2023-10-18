#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: char *
 * @src: char *
 * @n: int
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *t_dest;

	t_dest = dest;
	for (i = 0; (i < n) && (*t_dest = *src); i++)
	{
		t_dest++;
		src++;
	}
	t_dest = '\0';

	return (dest);
}
