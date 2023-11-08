#include "3-calc.h"

/**
 * main - entry point
 * @ac: int
 * @av: char **
 * Return: int
 */
int main(int ac, char *av[])
{
	int i, j;
	int (*op_func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(av[1]);
	j = atoi(av[3]);
	op_func = get_op_func(av[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(i, j));

	return (0);
}
