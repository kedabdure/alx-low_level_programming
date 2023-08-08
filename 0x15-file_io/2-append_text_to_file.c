#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The file name.
 * @text_content: NULL terminated string to add at the end.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *f, char *t)
{
	int fd;
	ssize_t len;

	if (f == NULL)
		return (-1);
	fd = open(f, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (t != NULL)
		len = write(fd, t, _strlen(t));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}

