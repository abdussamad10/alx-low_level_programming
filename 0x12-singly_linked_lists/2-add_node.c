#include "lists.h"

/**
 * add_node - adds a node at the beginning
 * of a linked list
 * @head: head of the list
 * @str: node data
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);

}
