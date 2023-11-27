#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: const char *
 * @text_content: char *
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (n = 0; text_content && text_content[n]; ++n)
		;
	n = write(fd, text_content, n);
	if (n == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
