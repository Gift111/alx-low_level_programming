#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of listint_t
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *strip;

	int n;

	strip = *head;

	if (strip == NULL)
		return (0);

	*head = strip->next;
	n = strip->n;
	free(strip);
	return (n);
}
