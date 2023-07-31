#include <stdio>
#include <stdlib>
#include "lists.h"
/**
 * print_listint - print the number of nodes
 * @h: accepts the first node address
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp = h;
	int count = 0;

	while(temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return count;
	
}
