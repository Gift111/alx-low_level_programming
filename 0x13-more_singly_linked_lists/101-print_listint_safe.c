#include "lists.h"
#include <stdio.h>

/**
 * free_listp - frees a linked list
 * @head: head of lost
 * Return: none
 */
void free_listp(listp_t **head)
{
	listp_t *strip;
	listp_t *now;

	if (head != NULL)
	{
		now = *head;
		while ((strip = now) != NULL)
		{
			now = now->next;
			free(strip);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints listint_t
 * @head: head of listint_t
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t mnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
		       exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (mnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		mnodes++;
	}

	free_listp(&hptr);
	return (mnodes);
}	
