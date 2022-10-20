#include "lists.h"

/**
 * add_node_end -  adds a new node
 * at the end of a list_t list.
 * @head: head of linked list
 * @str: string to store in list
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	last = *head;

	if (last == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
