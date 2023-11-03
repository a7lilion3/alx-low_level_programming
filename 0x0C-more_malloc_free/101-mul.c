#include <stdio.h>
#include <stdlib.h>

char *multiply(char *s1, char *s2);
int _strlen(char *s);
void set_mem(char *m, char b, int n);
char multiply_digit(char c1, char c2, char *carry);
char add_digit(char c1, char c2, char *carry);

/**
 * main - entry point
 * @ac: int
 * @av: char **
 * Return: int
 */
int main(int ac, char *av[])
{
	char *result;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(av[1], av[2]);

	printf("%s\n", result);

	return (0);
}

/**
 * multiply - multiply two strings numbers
 * @s1: char *
 * @s2: char *
 * Return: char *
 */
char *multiply(char *s1, char *s2)
{
	int n1, n2, nmax;
	int i, j, k;
	char digit;
	char *res;
	char *mcarry, *acarry;

	n1 = _strlen(s1);
	n2 = _strlen(s2);

	/* alloc & init carries */
	mcarry = malloc(1);
	acarry = malloc(1);

	*mcarry = '0';
	*acarry = '0';

	/* get the right alloc */
	nmax = (n1 > n2) ? n1 : n2;
	++nmax;		/* + 1 for last carry if there is one */
	res = malloc(nmax);

	set_mem(res, '0', nmax);	/* initialize memory with zeros */

	/* multiplication calculation */
	for (i = n1 - 1; i >= 0; --i)
	{
		for (j = n2 - 1, k = nmax - 1; j >= 0; --j, --k)
		{
			digit = multiply_digit(s1[i], s2[j], mcarry);
			res[k] = add_digit(res[k], digit, acarry);
		}
		digit = add_digit(*mcarry, res[k], NULL);
		res[k] = add_digit(digit, res[k], NULL);
	}

	free(mcarry);
	free(acarry);

	return (res);
}

/**
 * add_digit - add a digit
 * @c1: char
 * @c2: char
 * @carry: char *
 * Return: char
 */
char add_digit(char c1, char c2, char *carry)
{
	int res, c;

	if (carry == NULL)
		c = 0;
	else
		c = *carry - '0';

	res = (c1 - '0') + (c2 - '0') + c;

	if (carry != NULL)
		*carry = (res / 10) + '0';

	return ((res % 10) + '0');
}

/**
 * multiply_digit - mutliply a digit
 * @c1: char
 * @c2: char
 * @carry: char *
 * Return: char
 */
char multiply_digit(char c1, char c2, char *carry)
{
	int res, c;

	if (carry == NULL)
		c = 0;
	else
		c = *carry - '0';

	res = (c1 - '0') * (c2 - '0') + c;

	if (carry != NULL)
		*carry = (res / 10) + '0';
	
	return ((res % 10) + '0');
}

/**
 * set_mem - initialize memory
 * @m: char *
 * @b: char
 * @n: int
 * Return: void
 */
void set_mem(char *m, char b, int n)
{
	int i;

	for (i = 0; i < n; ++i)
		m[i] = b;
}

/**
 * _strlen - get length of a string
 * @s: char *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
