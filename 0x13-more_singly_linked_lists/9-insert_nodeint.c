#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at the given position
 * @head: pointer to the first node
 * @idx: where he new node should be
 * @n: int value of the nodes
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	else
	{
		ptr = *head;
		for (i = 0; i < idx - 1; i++)
		{
			ptr = ptr->next;
		}
		if (ptr == NULL)
			return (NULL);
	}
	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
