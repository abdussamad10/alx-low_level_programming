#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pointer list
 * Return:  number of elements
 */
size_t listint_len(const listint_t *h)
{
	int a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
