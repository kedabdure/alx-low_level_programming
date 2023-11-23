#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to decimal int
 * @b: A character pointer that hold binary number
 *
 * Return: unsigned int, if it failed return 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numb;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		numb = numb * 2	+ (*b - '0');
		b++;
	}
	return (numb);
}
