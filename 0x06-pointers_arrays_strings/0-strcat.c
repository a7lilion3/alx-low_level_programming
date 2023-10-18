#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: char *
 * @src: char *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	char *tmp_dest;

	tmp_dest = dest;

	while (*tmp_dest)
		tmp_dest++;
	while ((*tmp_dest++ = *src++))
		;

	return (dest);
}
