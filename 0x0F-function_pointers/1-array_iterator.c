#include "function_pointers.h"

/**
 * array_iterator - exec a func given as a param on each e of an arr
 * @array: int *
 * @size: size_t
 * @action: void (*)
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
