#include "main.h"

/**
 * leet - encodes a str into 1337
 * @s: char *
 * Return: char *
 */
char *leet(char *s)
{
	int i, j;
	char *ts = s;
	char lletters[5] = {'a', 'e', 'o', 't', 'l'};
	char uletters[5] = {'A', 'E', 'O', 'T', 'L'};
	char replacedby[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; ts[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (ts[i] == lletters[j] || ts[i] == uletters[j])
			{
				ts[i] = replacedby[j];
				break;
			}
		}
	}

	return (s);
}
