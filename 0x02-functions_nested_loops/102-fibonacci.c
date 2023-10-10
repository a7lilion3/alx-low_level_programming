#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int p, q, r;
	int i;

	p = 1;
	q = 2;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%ld, ", p);
		else
			printf("%ld\n", p);
		r = p + q;
		p = q;
		q = r;
	}

	return (0);
}
