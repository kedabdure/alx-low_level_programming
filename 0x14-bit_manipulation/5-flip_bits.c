#include "main.h"

/**
 * flip_bits - return the number of bit you would need to flip from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int cout_flips = 0, i;

	difference = n ^ m;
	result = 1;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if(result == (differnce & result)
			j++;
		result <<= 1;
	}

	return (j);
}

