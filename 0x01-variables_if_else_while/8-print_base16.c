#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char hex_digit[] = "012345678910abcdef";
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(hex_digit[i]);
	}
		putchar('\n');

	return (0);
}
		
