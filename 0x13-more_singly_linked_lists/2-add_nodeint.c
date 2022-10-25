#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list.
 * @h: pointer to the
 * head of listint_t list.
 * @n: integer new node should contain
 *
 * Return: address of the new element,
 * else NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));
	if (new_Node != NULL)
	{
		new_Node->n = n;
		new_Node->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		new_Node->next = *head;

	*head = new_Node;

	return (new_Node);
}
