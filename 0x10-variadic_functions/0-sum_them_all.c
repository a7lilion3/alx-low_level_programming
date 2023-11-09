#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its params
 * @n: const unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int r;
	va_list ag;

	if (n == 0)
		return (0);

	r = 0;
	va_start(ag, n);
	for (i = 0; i < n; ++i)
		r += va_arg(ag, int);
	va_end(ag);

	return (r);
}
