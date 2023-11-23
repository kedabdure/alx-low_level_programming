#include <unistd.h>
#include "main.h"

/**
 * _putchar - print char
 * @c: accept char
 *
 * Return: string:
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
