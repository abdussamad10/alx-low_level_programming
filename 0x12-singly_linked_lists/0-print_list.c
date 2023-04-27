#include "lists.h"
#include <stdio.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: number
 */

size_t print_list(const list_t *h)
{
	size_t num;
	num = 0;

	while (h)
	{
		if (h->str)

		printf("[%d\], %s\n", h->len, h->str);
		else
			printf("%s\n", "[0] (nil)");
			num++;
			h = h->next;
	}

	return (num);
}
