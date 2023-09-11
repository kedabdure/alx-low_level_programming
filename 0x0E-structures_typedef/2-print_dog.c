#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @pup: Pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *pup)
{
	if (pup != NULL)
	{
		if (pup->name != NULL)
			printf("Name: %s\n", pup->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", pup->age);
		if (pup->owner != NULL)
			printf("Owner: %s\n", pup->owner);
		else
			printf("Owner: (nil)\n");
	}
}
