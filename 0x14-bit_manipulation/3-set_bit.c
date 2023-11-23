#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bmask = 0x1;

	if (index > 63)
		return (-1);

	*n = *n | (bmask << index);
	return (1);
}
