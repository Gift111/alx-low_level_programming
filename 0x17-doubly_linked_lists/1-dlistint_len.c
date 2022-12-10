#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h);
{
	int count;

	size_t cont = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
