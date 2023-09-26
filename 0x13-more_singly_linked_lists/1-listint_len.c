#include "lists.h"

/**
 * listint_len - the number of elements in a linked list.
 *
 * @h: head pointer
 *
 * Return: the number of elements in tje list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	h = h->next;
		i++;
	}
	return (i);
}
