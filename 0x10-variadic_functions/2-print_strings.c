#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a specified separator.
 * @separator: The separator string.
 * @n: Number of unnamed parameters.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}

