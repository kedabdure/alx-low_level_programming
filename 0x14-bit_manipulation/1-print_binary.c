#include "main.h"

/**
 * _power - calculates the power of a number
 * @base: base of the exponent
 * @exp: exponent value
 * Return: result of base raised to the power of exp
 */
unsigned long int _power(unsigned int base, unsigned int exp)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 0; i < exp; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary and printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	char flag = 0;

	while (divisor != 0)
	{
		if ((n & divisor) == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

