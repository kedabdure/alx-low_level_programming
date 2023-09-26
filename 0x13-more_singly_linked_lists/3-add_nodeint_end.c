#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a node at the end of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer to add to the list.
 *
 * Return: Pointer to the newly added node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}

