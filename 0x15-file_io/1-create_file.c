#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: const char *
 * @text_content: char *
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd == -1)
		return (-1);

	if(chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (n = 0; text_content[n]; ++n)
		;

	if (write(fd, text_content, n) > 0)
		return (1);
	else
		return (-1);
}
