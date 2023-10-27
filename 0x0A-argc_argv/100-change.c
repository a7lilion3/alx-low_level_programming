#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = 0;
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n--;
		result++;
	}

	printf("%d\n", result);

	return (0);
}
