#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is greater than 5, less than 6 but not zero, or zero.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
<<<<<<< HEAD
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
=======

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
>>>>>>> 84b0a33ccaa540fad453b96e812bee9f082e6cf2

	printf("Last digit of %d is %d ", n, lastDigit);


	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
