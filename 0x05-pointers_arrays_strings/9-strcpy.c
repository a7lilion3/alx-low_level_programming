#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 * @dest: char *
 * @src: char *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	char *org_dest = dest;

	while ((*dest++ = *src++) != '\0')
		;
	return (org_dest);
}
