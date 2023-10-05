#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and prints text from a file.
 * @filename: Pointer to the file's name.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of bytes read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (read_bytes == -1 || write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (write_bytes);
}

