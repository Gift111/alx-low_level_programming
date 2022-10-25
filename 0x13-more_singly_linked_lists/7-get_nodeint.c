#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of listint_t
 * @index: index of node to find
 * Return: pointer to the desired node.
 * or NULL - if no node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t d;

	for (d = 0; (d < index) && (head->next); d++)
	head = head->next;

	if (d < index)
		return (NULL);

	return (head);
}
