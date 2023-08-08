#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *f, size_t l)
{
	ssize_t fd, rd, wr;
	char *buf;

	if (f == NULL)
		return (0);

	buf = malloc(sizeof(char) * l);
	if (buf == NULL)
		return (0);

	fd = open(f, O_RDONLY);
	rd = read(fd, buf, l);
	wr = write(STDOUT_FILENO, buf, rd);

	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (wr);
}

