#include "main.h"

/**
 * power - Calculate the power of a number
 * @base: The base number
 * @exponent: The exponent
 * Return: The result of base raised to the power of the exponent
 */
unsigned long int power(unsigned int base, unsigned int exponent)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return result;
}

/**
 * print_binary - Print the binary representation of a number
 * @num: The number to be converted to binary and printed
 */
void print_binary(unsigned long int num)
{
	unsigned long int divisor, temp;
	char flag = 0;

	divisor = power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor > 0)
	{
		temp = num & divisor;
		if (temp == divisor)
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

