#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @binary: pointing to a string of 0 and 1 chars representing binary number
 *
 * Return: converted number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *binary)
{
	int index;
	unsigned int decimal = 0;

	if (!binary)
		return (0);

	for (index = 0; binary[index] != '\0'; index++)
	{
		if (binary[index] != '0' && binary[index] != '1')
			return (0);
	}

	for (index = 0; binary[index] != '\0'; index++)
	{
		decimal <<= 1;
		if (binary[index] == '1')
			decimal += 1;
	}

	return (decimal);
}

