#include "lists.h"

/**
 * sum_listint - sum all the data of listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum of all the data
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int n;

	while (head != NULL)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	return (sum);
}
