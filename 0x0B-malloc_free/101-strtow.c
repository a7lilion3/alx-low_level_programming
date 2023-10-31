#include <stdlib.h>
#include "main.h"

/**
 * free_mem - free memory
 * @s: char **
 * @l: int
 * Return: char *
 */
char **free_mem(char **s, int l)
{
	int i;

	for (i = 0; i < l; i++)
		free(s[i]);
	free(s);
	return (NULL);
}

/**
 * strtow - splits a string into words
 * @str: char *
 * Return: char **
 */
char **strtow(char *str)
{
	int i, j, k, wc, first_letter;
	char **r;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = first_letter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !first_letter)
		{
			first_letter = 1;
			wc++;
		}
		else if (str[i] == ' ')
			first_letter = 0;
	}

	if (wc <= 0)
		return (NULL);

	r = malloc(wc * sizeof(char *) + 1);
	if (r == NULL)
		return (NULL);

	for (i = 0, j = 0; i < wc; i++)
	{
		while (str[j] == ' ')
			j++;
		for (k = 0; str[k] != ' ' && str[k] != '\0'; k++)
			;
		r[i] = malloc(k + 1);
		if (r[i] == NULL)
			return (free_mem(r, i));
		k = 0;
		while (str[j] != ' ' && (r[i][k++] = str[j++]) != '\0')
			;
	}
	r[i] = NULL;
	return (r);
}
