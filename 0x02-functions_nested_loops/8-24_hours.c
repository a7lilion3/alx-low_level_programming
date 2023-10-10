#include "main.h"

void print_hours_incminutes(char, char);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	char hd2, hd1;

	for (hd2 = '0'; hd2 <= '2'; hd2++)
	{
		for (hd1 = '0'; hd1 <= '9'; hd1++)
		{
			if (hd2 == '2' && hd1 == '3')
			{
				print_hours_incminutes(hd2, hd1);
				break;
			}
			else
			{
				print_hours_incminutes(hd2, hd1);
			}
		}
	}
}

/**
 * print_hours_incminutes - print hours, minutes and increment minutes
 * @h_digit2: 2nd digit of hours
 * @h_digit1: 1st digit of hours
 * Return: void
 */
void print_hours_incminutes(char h_digit2, char h_digit1)
{
	char m_digit2, m_digit1;

	for (m_digit2 = '0'; m_digit2 <= '5'; m_digit2++)
	{
		for (m_digit1 = '0'; m_digit1 <= '9'; m_digit1++)
		{
			_putchar(h_digit2);
			_putchar(h_digit1);
			_putchar(':');
			_putchar(m_digit2);
			_putchar(m_digit1);
			_putchar('\n');
		}
	}
}
