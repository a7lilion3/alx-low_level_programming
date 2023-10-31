#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concat all args
 * @ac: int
 * @av: char **
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		/* add 1 to length for the newline of each arg */
		len++;
	}

	s = malloc(len + 1);

	if (s == NULL)
		return (NULL);

	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	s[k] = '\0';

	return (s);
}
