#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: const char * const
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, c, iarg, carg;
	double farg;
	char *sarg;
	va_list ag;

	va_start(ag, format);
	i = 0;
	while (format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				carg = va_arg(ag, int);
				printf("%c", carg);
				break;
			case 'i':
				iarg = va_arg(ag, int);
				printf("%d", iarg);
				break;
			case 'f':
				farg = va_arg(ag, double);
				printf("%f", farg);
				break;
			case 's':
				sarg = va_arg(ag, char *);
				if (sarg == NULL)
					sarg = "(nil)";
				printf("%s", sarg);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	va_end(ag);
	printf("\n");
