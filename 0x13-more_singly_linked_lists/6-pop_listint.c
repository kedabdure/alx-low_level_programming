#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A double pointer to the head of the list.
 *
 * Return: The value stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	*head = current->next;
	n = current->n;
	free(current);

	return (n);
}

