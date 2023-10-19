#include "main.h"

/**
 * char_rot13 - encode c and add 13 to it
 * @c: char
 * Return: char
 */
char char_rot13(char c)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; in[i] != '\0'; i++)
		if (c == in[i])
			return (out[i]);
	return (c);
}

/**
 * rot13 - encodes a string using rot13
 * @s: char *
 * Return: char *
 */
char *rot13(char *s)
{
	char *ts = s;
	int i;

	for (i = 0; ts[i] != '\0'; i++)
		ts[i] = char_rot13(ts[i]);
	return (s);
}
