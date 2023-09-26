#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list.
 * @head: A double pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The value to assign to the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}

