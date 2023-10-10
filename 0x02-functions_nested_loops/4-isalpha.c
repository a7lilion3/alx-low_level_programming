#include "main.h"

/**
 * _isalpha - it checks for alpha chars
 * @c: ascii character
 * Return: 1 if it's alpha, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
