#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
