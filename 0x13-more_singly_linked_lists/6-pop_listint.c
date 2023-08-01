#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - The function return the first value of the list
 * @head: A pointer that holds the address of head
 *
 *Return: the value of deleted node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	ptr = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = ptr;

	return (n);
}
