#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: char *
 * @s2: char *
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	int i, ls1, ls2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ++ls1)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ++ls2)
		;

	result = malloc(ls1 + ls2 + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ls1; ++i)
		result[i] = s1[i];

	for (i = 0; i < ls2; ++i)
		result[ls1 + i] = s2[i];

	result[ls1 + ls2] = '\0';

	return (result);
}
