#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
