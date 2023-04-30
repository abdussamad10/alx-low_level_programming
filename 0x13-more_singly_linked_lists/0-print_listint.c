#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int a; 
	a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
