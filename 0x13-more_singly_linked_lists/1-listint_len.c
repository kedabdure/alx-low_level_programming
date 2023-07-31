#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return number of elements in the linkedlist.
 *@h: accept the address of the head
 *
 *Return: number of element
 *
 */
size_t listint_len(const listint_t *h)
{
	const size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
