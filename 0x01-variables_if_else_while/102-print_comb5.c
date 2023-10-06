#include <stdio.h>

/**
 * presult - print result
 * @i: int
 * @j: int
 * @k: int
 * @l: int
 * Return: void
 */
void presult(int i, int j, int k, int l)
{
		/* '9' * 1000 + '8' * 100 + '9' * 10 + '9' = 63227 */
		if ((i * 1000 + j * 100 + k * 10 + l) != 63227)
		{
			putchar(',');
			putchar(' ');
		}
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((l + k * 10) > (j + i * 10))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

						presult(i, j, k, l);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
