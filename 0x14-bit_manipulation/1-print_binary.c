#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted to binary and printed
 */
void print_binary(unsigned long int n)
{
    int bin = 0, rem = 0, place = 1;

    while (n)
    {
        rem = n % 2;
        n = n / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }

    while (bin > 0)
    {
        _putchar((bin % 10) + '0');
        bin /= 10;
    }
}

