#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer list
 * @idx: index
 * @n: data to insert
 */
 
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *p = *head;

	unsigned int a = 0;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	for (; p && a < idx; a++)
	{
		if (a == idx -1)
		{
			ptr->next = p->next;
			p->next = ptr;
			return (ptr);
		}
		else
			p = p->next;
	}
	return (NULL);
}
	
