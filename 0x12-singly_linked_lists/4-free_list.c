#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: head of list_t list.
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *last;

	while ((last = head) != NULL)
	{
		head = head->next;
		free(last->str);
		free(last);
	}
}
