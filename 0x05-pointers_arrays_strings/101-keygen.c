#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int c;
	time_t t;
	int i;
	int r;

	char key[255];

	c = 0;

	srand((unsigned) time(&t));

	for (i = 0; i < 255; i++)
		key[i] = 0;

	i = 0;
	c = 66;
	for (i = 0; i < 42; i++)
	{
		r = (rand() % 5) + 1;
		key[i] = c + r;
		key[++i] = c - r;
	}

	printf("%s\n", key);

	return (0);
}
