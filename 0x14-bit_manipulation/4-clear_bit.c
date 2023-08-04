#include "main.h"

/**
 * clear_bit - set the value of the bit to zero at the given index
 * @n: pointer that point to the number to be cleared.
 * @index: the bit to be deleted
 *
 * Return: 1 if the bit successfully cleard, 0 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
