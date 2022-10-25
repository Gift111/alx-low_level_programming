#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end
 * of a listint_t list.
 * @head: pointer to head of a listint_t list.
 * @n: integer used as content
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *pointer = *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
	}
	else
		return (NULL);

	if (pointer != NULL)
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = node;
	}
	else
		*head = node;
	return (node);
}
