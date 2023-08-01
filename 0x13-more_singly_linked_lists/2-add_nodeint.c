#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add nodes at the bigning of the linked list
 * @head: hold  address of head pointer
 * @n: receive intiger value
 *
 * Return: return the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		return (NULL);
	}
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
