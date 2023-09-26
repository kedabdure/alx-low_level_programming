#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n) in a listint_t linked list.
 * @head: Pointer to the first node of the list
 *
 * Return: The sum of all the data values in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

