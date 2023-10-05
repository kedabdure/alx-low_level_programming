#include "main.h"

/**
 * _str_len - Calculate string length.
 * @str: Pointer to the string.
 * Return: Length of the string.
 */
size_t _str_len(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text - Appends text to the end of a file.
 * @filename: Name of the file.
 * @content: NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text(const char *filename, char *content)
{
	int fd;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (content != NULL)
		written_bytes = write(fd, content, _str_len(content));
	close(fd);
	if (written_bytes == -1)
		return (-1);
	return (1);
}

