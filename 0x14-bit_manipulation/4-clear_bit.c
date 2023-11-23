#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: unsigned long int *
 * @index: unsigned int
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bmask = 0x1;

	if (index > 63)
		return (-1);

	*n = *n & ~(bmask << index);
	return (1);
}
