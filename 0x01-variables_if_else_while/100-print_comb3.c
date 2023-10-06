#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);

				if (n != '8' || m != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
