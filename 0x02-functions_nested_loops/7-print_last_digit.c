#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	return (_abs(n % 10));
}

/**
 * _abs - computes absolute value
 * @n: number
 * Return: absolute number of @n
 */
int _abs(int n)
{
	return (n > 0 ? n : -n);
}
