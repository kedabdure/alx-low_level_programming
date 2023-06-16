#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is greater than 5, less than 6 but not zero, or zero.
 * Return always 0.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit =n%10;

	printf("Last digit of %d is ", n);


	if (lastDigit > 5)
		printf("and is greater than 5");
	else if (lastDigit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}