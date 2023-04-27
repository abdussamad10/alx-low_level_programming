#include "lists.h"
#include <stdio.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: number
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
