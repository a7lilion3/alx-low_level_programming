#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and print to the POSIX stdout
 * @filename: const char *
 * @letters: size_t
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t n;
	size_t *buf;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	n = read(fd, buf, letters);
	if (n == -1)
		return (0);

	n = write(STDOUT_FILENO, buf, n);
	if (n == -1)
		return (0);

	free(buf);
	close(fd);

	return (n);
}
