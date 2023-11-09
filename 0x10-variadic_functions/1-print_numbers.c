#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: const char *
 * @n: const unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;

	if (separator == NULL)
		return;

	va_start(ag, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(ag, int));
		if (i == n - 1)
			printf("\n");
		else
			printf("%s", separator);
	}
	va_end(ag);
}
