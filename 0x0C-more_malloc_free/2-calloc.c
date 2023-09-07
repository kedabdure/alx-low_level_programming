#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		memory[index] = 0;

	return (memory);
}

