#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers within a specified range
 * @min: minimum value of the range (inclusive)
 * @max: maximum value of the range (inclusive)
 *
 * Return: pointer to the new array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}

