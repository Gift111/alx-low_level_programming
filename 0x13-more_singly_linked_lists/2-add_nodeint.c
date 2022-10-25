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
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *h;
	}
	else
		return (NULL);

	if (*h != NULL)
		new->next = *h;

	*h = new;

	return (new);
}
