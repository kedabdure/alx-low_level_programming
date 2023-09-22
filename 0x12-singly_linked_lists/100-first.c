#include <stdio.h>

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Function to print a message before main.
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}

