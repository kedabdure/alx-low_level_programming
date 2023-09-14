#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the numbers passed as arguments.
 * @n: The number of parameters passed.
 *
 * Return: The sum of all the numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	va_end(args);

	return (total);
}

