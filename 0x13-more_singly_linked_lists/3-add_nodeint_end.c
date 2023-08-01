#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - it add new nodes at the end.
 * @head: to hold address of the new node.
 * @n: receive int number.
 *
 * Return: new added address,NULL if it failed.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);
}
