#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary representation
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor;
	char flag = 0;

	divisor = IUL << (sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		if (n & divisor)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			putchar('0');
		}
		divisor >>= 1;
	}
}
