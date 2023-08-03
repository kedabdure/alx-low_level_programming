#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer point8ng to string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		k = k << 1;
		if (b[i] == '1')
			k = k + 1;
	}
	return (k);

}
