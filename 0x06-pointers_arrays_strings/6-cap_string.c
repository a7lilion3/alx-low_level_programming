#include "main.h"

/**
 * is_alpha - check if c is alpha.
 * @c: char
 * Return: int
 */
int is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * is_lower - check if c is lowercase
 * @c: char
 * Return: int
 */
int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * to_upper - convert a lowercase to uppercase
 * @c: char c
 * Return: char
 */
char to_upper(char c)
{
	if (is_lower(c))
		return ('A' + (c - 'a'));
	return (c);
}

/**
 * cap_string - capitalize all words of a string
 * @s: char *
 * Return: char *
 */
char *cap_string(char *s)
{
	int i, j;
	int in_word;
	char c;
	char *ts;
	char delm[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
		')', '{', '}'};

	in_word = 1;
	ts = s;
	for (i = 0; ts[i] != '\0'; i++)
	{
		c = ts[i];
		if (is_alpha(c) && in_word)
		{
			ts[i] = to_upper(c);
			in_word = 0;
		}
		else
		{
			for (j = 0; j < 14; j++)
				if (c == delm[j])
					in_word = 1;
		}
	}

	return (s);
}
