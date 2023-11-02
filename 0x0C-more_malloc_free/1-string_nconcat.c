#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: char *
 * @s2: char *
 * @n: usigned int
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; ++i)
		;
	--i;	/* Removing '\0' */

	for (j = 0; j < n && s2[j]; ++i, ++j)
		;

	p = malloc(i);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; ++i)
		p[i] = s1[i];
	for (j = 0; j < n && s2[j]; ++i, ++j)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
