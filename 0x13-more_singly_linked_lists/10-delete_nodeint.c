#include "lists.h"

/**
 * delete_nodeint_at_index - delet the node at the index
 * @head: pointer to the first node
 * @index: index of the node that should be deleted
 *
 * Return: 1 for success, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *ptr;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	else
	{
		ptr = *head;
		for (i = 0; i < index - 1; i++)
		{
			ptr = ptr->next;
			if (ptr == NULL)
				return (-1);
		}
		temp = ptr->next;
		ptr-next = temp-next;
		free(temp);
	}
	return (1);
}
