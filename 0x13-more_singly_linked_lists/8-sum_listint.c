#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of listint_t
 * Return: returns the sum of all the data (n)
 * or 0 - if void
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
