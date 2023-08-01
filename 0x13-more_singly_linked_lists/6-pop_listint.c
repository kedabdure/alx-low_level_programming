#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Delet the first node and return it's value
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
	return (n);
}
