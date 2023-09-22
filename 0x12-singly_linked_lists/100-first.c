#include <stdio.h>

/**
 * printBeforeMain - Function to print a message before main.
 */
void printBeforeMain(void) __attribute__((constructor));

/**
 * printBeforeMain - Implementation of printBeforeMain.
 */
void printBeforeMain(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

