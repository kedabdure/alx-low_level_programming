#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int j;

	k = 0;
	j = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		j++;
		k++;
	}

	dest[k] = '\0';
	return (dest);
}
