#include "main.h"

/**
 * _sqrt - check if i * i equals n
 * @i: int
 * @n: int
 * Return: int
 */
int _sqrt(int i, int n)
{
	if (i > n / 2)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i = 2;

	if (n == 1)
		return (1);
	return (_sqrt(i, n));
}
