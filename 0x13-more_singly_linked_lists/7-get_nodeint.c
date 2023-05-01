#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer list
 * @index: index of the node, starting at 0
 * Return; pinter
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int a = 0;

	while (ptr && a < index)
	{
		ptr = ptr->next;
		a++;
	}
	return (ptr ? ptr : NULL);
}
