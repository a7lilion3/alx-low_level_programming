#include "main.h"

/**
 * divisors - count number of divisors
 * @i: int
 * @n: int
 * Return: int
 */
int divisors(int i, int n)
{
	if (i >= n)
		return (0);
	if (n % i == 0)
		return (1 + divisors(i + 1, n));
	return (divisors(i + 1, n));
}

/**
 * is_prime_number - returns 1 if it's a prime number, 0 otherwise
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	if (n == 1)
		return (0);
	if (!divisors(2, n))
		return (1);
	return (0);
}
