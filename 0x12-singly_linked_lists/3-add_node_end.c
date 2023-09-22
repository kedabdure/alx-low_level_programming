#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to find the length of.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int length;

	for (length = 0; str[length]; length++)
		;
	return (length);
}

/**
 * add_node_end - Add a new node to the end of a linked list.
 * @head: Double pointer to a linked list.
 * @str: String to add to the new node.
 *
 * Return: Pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;
	return (new_node);
}

