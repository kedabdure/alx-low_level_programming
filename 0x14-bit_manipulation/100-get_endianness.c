#include "main.h"
/**
 * get_endianness - check the endianness of the system
 * 
 * Return: void
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	return (c[0] == 1);
}
