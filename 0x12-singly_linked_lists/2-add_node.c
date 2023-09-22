#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @c :  is a character
 * Return: length of the string
 */
int _strlen(const char *c)
{
	int count = 0;

	while (c[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: first element of the list
 * @str: element of the list
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
