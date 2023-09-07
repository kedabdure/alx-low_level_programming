#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to the nth character.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters from s2 to concatenate
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, k;
	char *result;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; ++len1)
			;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; ++len2)
			;
	}

	if (len2 > n)
		len2 = n;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[len1 + len2] = '\0';
	return (result);
}

