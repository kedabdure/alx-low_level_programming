#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @initial: Initial value.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char initial)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = (char *)malloc(sizeof(char) * size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        array[i] = initial;

    return (array);
}

