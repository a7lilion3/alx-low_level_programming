#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int fdigit = n % 10;

	if (fdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, fdigit);
	}
	else if (fdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, fdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, fdigit);
	}

	return (0);
}
