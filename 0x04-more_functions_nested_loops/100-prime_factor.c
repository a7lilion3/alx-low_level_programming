#include <stdio.h>
#include <math.h>

int isprime(int);

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int number;
	int i, max_prime;

	number = 612852475143;
	i = max_prime = -1;
	while (number % 2 == 0)
	{
		max_prime = 2;
		number >>= 1;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number /= i;
		}
	}

	if (number > 2)
		max_prime = number;

	printf("%d\n", max_prime);

	return (0);
}
