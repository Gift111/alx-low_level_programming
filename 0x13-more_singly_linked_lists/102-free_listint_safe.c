#include "lists.h"
#include <stdio.h>

/**
 * free_listp2 - frees a linked list
 * @head: head
 * return: none
 */
void free_listp2(listp_t **head)
{
	listsp_t *strip;
	listsp_t *now;

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
 * free_listint_safe - frees a listint_t list.
 * @h: head
 * return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t mnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *now;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listsp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listsp2(&hptr);
				return (mnodes);
			}
		}

		now = *h;
		*h = (*h)->next;
		free(now);
		mnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (mnodes);
}
