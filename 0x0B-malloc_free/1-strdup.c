#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is duplicated of str
 * @str: char *
 * Return: char *
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	/* calculate length of string */
	for (i = 0; str[i] != '\0'; ++i)
		;

	/* allocate memory */
	s = malloc(i);

	/* error check */
	if (str == NULL || s == NULL)
		return (NULL);

	/* copy string to allocated memory */
	for (i = 0; str[i] != '\0'; ++i)
		s[i] = str[i];

	return (s);
}
