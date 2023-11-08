#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: int
 * @av: char **
 * Return: int
 */
int main(int ac, char **av)
{
	int i, n;
	unsigned char *pmain;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(av[1]);
	pmain = (unsigned char *) main;

	if (n <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; ++i)
	{
		printf("%02x ", pmain[i]);
	}
	printf("\n");

	return (0);
}
