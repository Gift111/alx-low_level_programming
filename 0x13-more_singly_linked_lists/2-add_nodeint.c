#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list.
 * @h: pointer to the head of listint_t list.
 * @n: integer new node should contain
 *
 * Return: address of the new element,
 * else NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
