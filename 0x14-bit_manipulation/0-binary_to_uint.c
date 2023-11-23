#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to uint
 * @b: const char *b
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i, n, p;

	/* check if there is b */
	if (b == NULL)
		return (0);

	/* calculate length of b */
	for (n = 0; b[n]; ++n)
		;

	/* calculate the number */
	p = 1;
	res = 0;
	for (i = n - 1; i >= 0; --i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res += p * (b[i] - '0');
		p *= 2;
	}

	return (res);
}
