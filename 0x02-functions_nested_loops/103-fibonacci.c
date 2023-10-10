#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int p, q, r;
	long int sum;

	p = 1;
	q = 2;
	sum = 0;
	while (1)
	{
		r = p + q;
		if (p > 4000000)
			break;
		sum += p;
		p = q;
		q = r;
	}
	printf("%ld\n", sum);

	return (0);
}
