#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of listint_t
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *d;
	listint_t *m;

	d = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = d;
		d = *head;
		*head = m;
	}

	*head = d;
	return (*head);
}
