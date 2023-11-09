#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: const char *
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ag;

	if (separator == NULL)
		separator = "";

	va_start(ag, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(ag, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(ag);

	printf("\n");
}
