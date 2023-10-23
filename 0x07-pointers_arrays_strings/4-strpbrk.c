#include "main.h"

/**
 * _strpbrk - it searches a string for any of a set of bytes
 * @s: char *
 * @accept: char *
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *t;

	for (i = 0; s[i] != '\0'; ++i)
		for (t = accept; *t != '\0'; t++)
			if (s[i] == *t)
				return (s + i);
	return (0);
}
