#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long long int p, q, r;
	int i;

	p = 1;
	q = 2;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%lld, ", p);
		else
			printf("%lld\n", p);
		r = p + q;
		p = q;
		q = r;
	}

	return (0);
}
