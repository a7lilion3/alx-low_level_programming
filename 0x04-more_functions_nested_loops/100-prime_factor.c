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
	i =  max_prime = 2;
	while (number != 1)
	{
		if (isprime(i) && number % i == 0)
		{
			printf("%d\n", i);
			number /= i;
			if (i > max_prime)
				max_prime = i;
			i = 2;
		}
		else
		{
			i++;
		}
	}

	return (0);
}

/**
 * isprime - to check if n is prime
 * @n: int
 * Return: 1 if it's a prime number, 0 otherwise
 */
int isprime(int n)
{
	int tn, i;

	tn = sqrt(n);
	for (i = 2; i <= tn; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
