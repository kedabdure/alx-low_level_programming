#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free the elements of linkedlist.
 * @head: hold the head of the list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
