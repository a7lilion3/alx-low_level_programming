#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * err_narg - error
 * Return: int
 */
int err_narg(void)
{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
}

/**
 * err_read - error
 * @ag: char *
 * Return: int
 */
int err_read(char *ag)
{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ag);
		return (98);
}

/**
 * err_write - error
 * @ag: char *
 * Return: int
 */
int err_write(char *ag)
{
		dprintf(STDERR_FILENO, "Can't write to %s\n", ag);
		return (99);
}

/**
 * err_close - error
 * @fd: int
 * Return: int
 */
int err_close(int fd)
{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
}

/**
 * main - entry point
 * @ac: int
 * @av: char **
 *
 * Return: int
 */
int main(int ac, char **av)
{
	int fto, ffrom;
	int n;
	int *buf;

	if (ac != 3)
		return (err_narg());

	ffrom = open(av[1], O_RDONLY);
	if (ffrom == -1)
		return (err_read(av[1]));

	buf = malloc(1024);
	if (buf == NULL)
		return (err_read(av[1]));

	fto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto == -1)
		return (err_write(av[2]));

	while ((n = read(ffrom, buf, 1024)) > 0)
	{
		if (write(fto, buf, n) == -1)
			return (err_write(av[2]));
	}

	free(buf);

	n = close(fto);
	if (n == -1)
		return (err_close(fto));

	n = close(ffrom);
	if (n == -1)
		return (err_close(ffrom));

	return (0);
}
