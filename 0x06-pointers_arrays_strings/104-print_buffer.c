#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - print buffer
 * @b: char *
 * @size: int
 * Return: void
 */
void print_buffer(char *b, int size)
{
	char *cb;
	unsigned int addr;
	int i, j;

	for (i = 0; i < size; i += 0xa)
	{
		addr = i;
		printf("%08x: ", addr);

		for (j = 0; j < 0xa; j++)
		{
			cb = b + i + j;

			/* once i + j exceeds size will print just spaces */
			if (i + j < size)
				printf("%02x", *(cb));
			else
			{
				/* 2 spaces for 2 bytes*/
				printf("  ");
			}

			if ((j + 1) % 2 == 0)
				printf(" ");
		}

		for (j = 0; j < 0xa && i + j < size; j++)
		{
			cb = b + i + j;
			if (*cb >= 0x0 && *cb <= 0xa)
				printf(".");
			else
				printf("%c", *cb);
		}
		printf("\n");
	}
}
