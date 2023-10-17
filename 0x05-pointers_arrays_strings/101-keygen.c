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
	int c, n;
	time_t t;
	int i;

	char key[255];

	c = 0;
	n = 0;

	srand((unsigned) time(&t));

	for (i = 0; i < 255; i++)
		key[i] = 0;

	i = 0;
	while (1)
	{
		c = '~';
		for (i = 0; i < 22; i++)
			key[i] = c;
		break;
	}

	printf("%s\n", key);

	return (0);
}
