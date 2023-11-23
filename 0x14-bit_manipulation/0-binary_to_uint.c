#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numb;

	if(b == NULL)
	{
		return (0);
	}

	while(*b != '\0')
	{
		if(*b != '0' && *b != '1')
			return (0);

		numb = numb * 2	+ (*b - '0');
		b++;
	}
	return (numb);
}
