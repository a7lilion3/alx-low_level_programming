#include "main.h"

/**
 * right_pointer - return the last pointer in s
 * @n: int
 * @s: char *
 * Return: int
 */
int right_pointer(int n, char *s)
{
	if (!*(s + n))
		return (0);
	return (1 + right_pointer(n + 1, s));
}

/**
 * check_palindrome - returns 1 if s is palindrom, 0 if not
 * @is_p: int
 * @left: int
 * @right: int
 * @s: char *
 * Return: int
 */
int check_palindrome(int is_p, int left, int right, char *s)
{
	if (left >= right || is_p == 0)
		return (is_p);
	if (*(s + left) == *(s + right))
		return (check_palindrome(1, left + 1, right - 1, s));

	/* no need to inc left, and dec right if it's not palindrome */
	return (check_palindrome(0, left, right, s));
}

/**
 * is_palindrome - returns 1 if s is palindrome, 0 if not
 * @s: char *
 * Return: int
 */
int is_palindrome(char *s)
{
	int left, right;

	right = right_pointer(0, s) - 1;
	left = 0;

	return (check_palindrome(1, left, right, s));
}
