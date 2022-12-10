#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
