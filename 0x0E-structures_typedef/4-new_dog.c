#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length, owner_length, i;
	dog_t *new_pup;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_pup = malloc(sizeof(dog_t));
	if (new_pup == NULL)
		return (NULL);

	for (name_length = 0; name[name_length]; name_length++)
		;
	name_length++;

	new_pup->name = malloc(name_length * sizeof(char));
	if (new_pup->name == NULL)
	{
		free(new_pup);
		return (NULL);
	}

	for (i = 0; i < name_length; i++)
		new_pup->name[i] = name[i];

	new_pup->age = age;

	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	owner_length++;

	new_pup->owner = malloc(owner_length * sizeof(char));
	if (new_pup->owner == NULL)
	{
		free(new_pup->name);
		free(new_pup);
		return (NULL);
	}

	for (i = 0; i < owner_length; i++)
		new_pup->owner[i] = owner[i];

	return (new_pup);
}

