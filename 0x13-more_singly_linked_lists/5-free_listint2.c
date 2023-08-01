#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Free the list.
 * @head: A pointer that hold the head address
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
