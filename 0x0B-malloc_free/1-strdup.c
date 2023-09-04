#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @src: The source string.
 *
 * Return: Returns a pointer to the duplicated string.
 *         It returns NULL if insufficient memory was available.
 */
char *_strdup(char *src)
{
	char *duplicate;
	int i, length = 0;

	if (src == NULL)
		return (NULL);

	while (src[length] != '\0')
		length++;

	duplicate = (char *)malloc((sizeof(char) * length) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = src[i];
	duplicate[length] = '\0';

	return (duplicate);
}

