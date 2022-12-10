#include "lists.h"

/**
 *print-ize_t nodes = 0;
 *
 * @h: head of list.
 * Return: Number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++:
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes)
}	
