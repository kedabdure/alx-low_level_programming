#include "main.h"
#include <stdlib.h>

/**
 * custom_read_textfile - Reads a text file and displays it on standard output.
 * @file_name: The name of the file to read.
 * @num_bytes: The number of bytes to read and print.
 *
 * Return: The number of bytes read and printed. 0 if there's an error.
 */
ssize_t custom_read_textfile(const char *file_name, size_t num_bytes)
{
	int file_descriptor, read_result, write_result;
	char *data_buffer;

	if (file_name == NULL)
		return (0);

	data_buffer = malloc(sizeof(char) * num_bytes);
	if (data_buffer == NULL)
		return (0);

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(data_buffer);
		return (0);
	}

	read_result = read(file_descriptor, data_buffer, num_bytes);
	close(file_descriptor);

	if (read_result == -1)
	{
		free(data_buffer);
		return (0);
	}

	write_result = write(STDOUT_FILENO, data_buffer, read_result);
	free(data_buffer);

	if (write_result == -1 || write_result != read_result)
		return (0);

	return (write_result);
}

