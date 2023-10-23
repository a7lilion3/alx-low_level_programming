#include "main.h"

/**
 * _strspn - it gets the length of a prefix substring
 * @s: char *
 * @accept: char *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int len;
	char *t;

	len = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		t = accept;
		found = 0;
		for (j = 0; t[j] != '\0'; j++)
		{
			if (s[i] == t[j])
			{
				found = 1;
				len++;
				break;
			}
		}

		if (!found)
			break;
	}

	return (len);
}
