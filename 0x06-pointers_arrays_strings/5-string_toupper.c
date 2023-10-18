#include "main.h"

/**
 * is_lower - check if a char is lowercase
 * @c: char
 * Return: boolean
 */
int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * to_upper - it changes a char to uppercase
 * @c: char
 * Return: char
 */
char to_upper(char c)
{
	if (is_lower(c))
		return ('A' + (c - 'a'));
	return (c);
}

/**
 * string_toupper - it changes all lowercase letters to uppercase
 * @s: char *
 * Return: char *
 */
char *string_toupper(char *s)
{
	int i;
	char *ts;

	ts = s;
	for (i = 0; ts[i] != '\0'; i++)
		ts[i] = to_upper(ts[i]);
	return (s);
}
