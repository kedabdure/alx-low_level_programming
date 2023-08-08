#include "main.h"
#include <stdlib.h>

/**
 * custom_read_textfile - Reads a text file and displays it on standard output.
 * @file_name: The name of the file to read.
 * @num_bytes: The number of bytes to read and print.
 *
 * Return: The number of bytes read and printed. 0 if there's an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
