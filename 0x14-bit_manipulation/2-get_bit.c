#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 0x1);
}
