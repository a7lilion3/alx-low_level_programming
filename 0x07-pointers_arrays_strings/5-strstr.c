#include "main.h"

/**
 * _strstr - it locates a substring
 * @haystack: char *
 * @needle: char *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found;
	char *t;

	found = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, t = needle; *t != '\0' && i != '\0'; t++)
		{
			if (haystack[j] == *t)
			{
				found = 1;
				j++;
			}
			else
			{
				found = 0;
				break;
			}
		}
		if (found)
			return (haystack + i);
	}

	return (0);
}
