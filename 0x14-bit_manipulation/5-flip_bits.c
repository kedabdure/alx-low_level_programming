#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int bit_count = 0;

	while (difference > 0)
	{
		bit_count += difference & 1;
		difference >>= 1;
	}

	return (bit_count);
}

