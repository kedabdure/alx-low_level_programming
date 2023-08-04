#include "main.h"

/**
 * get_bit - return the value of a bit at a given index.
 * @n: the number of check bits
 * @index: the index of the bit to check
 *
 * Return: the value of a bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
			return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
