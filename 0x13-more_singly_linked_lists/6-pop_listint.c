#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: POINTER LIST
 * Return: if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (a);
}
