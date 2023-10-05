#include "main.h"

/**
 * _strlen - Finds the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
size_t _strlen(char *str)
{
	size_t length;

	for (length = 0; str && str[length]; length++)
		;
	return (length);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes;

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	written_bytes = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (written_bytes == -1)
		return (-1);

	return (1);
}

