#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add nodes at the bigning of the linked list
 * @head: hold  address of head pointer
 * @n: receive intiger value
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t))

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (head);
}
