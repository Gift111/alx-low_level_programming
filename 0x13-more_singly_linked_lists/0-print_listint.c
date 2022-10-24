#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: points to the head of listint_t
 *
 * Return: the number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_in_list = 0;

	while (h)
	{
		nodes_in_list++;
		printf("%d\n", h->n);
		h = h->n;
	}

	return (nodes_in_list);
}
