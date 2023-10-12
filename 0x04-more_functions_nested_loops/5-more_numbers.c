#include "main.h"

/**
 * more_numbers - prints from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
	char i, j;

	for (i = '0'; i <= '1'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i != '0')
				_putchar(i);
			_putchar(j);

			/* check the end */
			if (i != '0' && j == '4')
				break;
		}
	}
	_putchar('\n');
}
