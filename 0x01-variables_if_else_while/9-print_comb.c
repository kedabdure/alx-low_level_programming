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
	int n;


	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
