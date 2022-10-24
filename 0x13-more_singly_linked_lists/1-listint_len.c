#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: head of listint_t
 * Return: the number of elements in linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t nodes_in_list = 0;

	while (pointer != NULL)
	{
		nodes_in_list += 1;
		pointer = pointer->next;
	}
	return (nodes_in_list);
}
