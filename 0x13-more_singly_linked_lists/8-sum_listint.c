#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer list
 * Return:  list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
