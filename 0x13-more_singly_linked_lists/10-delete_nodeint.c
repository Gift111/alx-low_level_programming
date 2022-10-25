#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the head of listint_t
 * @index: index of the node
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *strip *dup = *head;
	unsigned int node;

	if (dup == NULL)
		return (-1);

	if (index == 0)

	{
		*head = (*head)->next;
		free(dup);

		return (1);
	}

	for (node = 0; node < (index - 1); node++)

	{
		if (dup->next == NULL)
			return (-1);

		dup = dup->next;
	}

	strip = dup->next;
	dup->next = strip->next;
	free(strip);
	return (1);
}
