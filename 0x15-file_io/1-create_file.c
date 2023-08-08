#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *f, char *t)
{
	int fd, wr, len = 0;

	if (f == NULL)
		return (-1);

	if (t != NULL)
	{
		while (t[len])
			len++;
	}

	fd = open(f, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, t, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}

