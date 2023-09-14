#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments based on a specified format.
 * @format: A string that specifies the necessary operations for each argument.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int separator_flag = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				separator_flag = 1;
				break;
		}

		if (format[i + 1] && !separator_flag)
			printf(", ");

		i++;
		separator_flag = 0;
	}
	printf("\n");
	va_end(args);
}

