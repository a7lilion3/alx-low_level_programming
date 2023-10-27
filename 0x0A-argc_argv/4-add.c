#include <ctype.h>
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
	int i, j;
	int result;

	result = 0;
	for (i = 1; i < argc; ++i)
	{
		for (j = 0; *(argv[i] + j) != '\0'; ++j)
		{
			if (!isdigit(*(argv[i] + j)))
			{
				printf("Error\n");
				return (1);
			}

		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
