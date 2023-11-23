#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check bits
 * @index: The index of the bit to check
 *
 * Return: The value of the bit at the specified index, or -1 if index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	result = n & divisor;

	if (result == divisor)
		return (1);

	return (0);
}

