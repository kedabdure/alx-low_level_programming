#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string.
 * @str: String to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
		;

	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_pup = malloc(sizeof(dog_t));
	if (new_pup == NULL)
		return (NULL);

	new_pup->name = _strdup(name);
	if (new_pup->name == NULL)
	{
		free(new_pup);
		return (NULL);
	}

	new_pup->age = age;

	new_pup->owner = _strdup(owner);
	if (new_pup->owner == NULL)
	{
		free(new_pup->name);
		free(new_pup);
		return (NULL);
	}

	return (new_pup);
}

