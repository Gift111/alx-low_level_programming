#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of listint_t list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *strip;

	while (head != NULL)
	{
		strip = head;
		head = head->next;
		free(strip);
	}
}
