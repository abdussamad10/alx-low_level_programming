#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer of the list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *p = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		i++;
	}

	p = ptr->next;
	ptr->next = p->next;
	free(p);

	return (1);
}
