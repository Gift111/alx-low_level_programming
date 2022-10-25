#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of listint_t
 * @idx: index of listint_t
 * @n: value of new node
 * Return: pointer to new node or NULL - if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *strip = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = strip;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (strip == NULL || strip->next == NULL)
			return (NULL);

		strip = strip->next;
	}

	new->next = strip->next;
	strip->next = new;

	return (new);
}
