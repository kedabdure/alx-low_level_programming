#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - print the number of nodes
 * @h: holds the first node address
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return count;
}
