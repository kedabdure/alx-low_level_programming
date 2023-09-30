#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input number
 * @index: index of the bit to get
 *
 * Return: the value of the bit at index, or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;

	if ((n & mask) == mask)
		return (1);
	else
		return (0);
}

