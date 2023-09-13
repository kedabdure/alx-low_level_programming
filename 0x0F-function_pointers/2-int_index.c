#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first integer for which the
 * comparison function returns true,
 * or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}

	return (-1);
}

