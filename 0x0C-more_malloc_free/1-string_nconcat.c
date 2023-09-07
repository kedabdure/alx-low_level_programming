#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: If memory allocation fails or if n is greater than or equal to the
 *         length of s2, return a pointer to a new string containing s1
 *         followed by the entire s2. Otherwise, return a pointer to a new
 *         string containing s1 followed by n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	if (s1 != NULL)
	{
		for (; s1[len1]; len1++)
			;
	}

	if (s2 != NULL)
	{
		for (; s2[len2]; len2++)
			;
	}

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

