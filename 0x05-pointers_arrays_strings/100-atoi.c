#include "main.h"
#include <stdio.h>


int is_digit(char c);
int to_digit(char c);

/**
 * _atoi - convert a string to an integer
 * @s: char *
 * Return: int
 */
int _atoi(char *s)
{
	int i, digit, len;
	int nstart, order;
	long int result;
	int nminus;

	len = _strlen(s);
	nstart = 0;
	nminus = 0;
	result = 0;
	for (i = len - 1; i >= 0; i--)
	{
		if (is_digit(s[i]))
		{
			digit = to_digit(s[i]);
			if (!nstart)
			{
				nstart = 1;
				result = 1;
				order = 1;
				nminus = 0;
			}

			if (result == 1)
				result = order * digit;
			else
				result += order * digit;
			order *= 10;
		}
		else
		{
			if (nstart)
			{
				nstart = 0;
			}
		}

		if (s[i] == '-')
			nminus++;
	}

	if (nminus % 2 == 0)
		return (result);
	return (-result);
}

/**
 * _strlen - return the length of the string
 * @s: char *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++; i++)
		;
	return (i);
}

/**
 * is_digit - check if c is a digit or not
 * @c: char
 * Return: 1 if it's digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * to_digit - convert char to int
 * @c: char
 * Return: int
 */
int to_digit(char c)
{
	return (c - '0');
}
