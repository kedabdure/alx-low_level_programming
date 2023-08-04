#include "main.h"

/**
 * set_bit - set the value of bit to one at a given index.
 * @n: A pointer to which the bit will be set
 * @index: where the bit to be set
 *
 * Return: 1 (succss), 0 (error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
