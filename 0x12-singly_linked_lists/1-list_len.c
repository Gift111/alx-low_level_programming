#include "lists.h"

/**
 * list_len - returns the number of elements in a
 * linked list_t list.
 * @h: list_t list
 * Return: number of elements in list_t list
 */

size_t list_len(const list_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;
	while (h)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}
