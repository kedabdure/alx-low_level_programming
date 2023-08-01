#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Rerurn the node at a given index.
 * @head: poinetr that holds head address.
 * @index: used to select node
 *
 * Return: indexed node
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
