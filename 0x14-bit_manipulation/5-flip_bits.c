#include "main.h"

/**
 * flip_bits - Determines the number of bits needed to flip to
 *             get from one number to another.
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int difference = num1 ^ num2;
	unsigned int count = 0;

	while (difference > 0)
	{
		if (difference & 1)
			count++;
		difference >>= 1;
	}

	return (count);
}

