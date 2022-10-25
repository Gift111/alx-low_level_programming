#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *strip;

if (head == NULL)
return;

while (*head)
{
strip = *head;
*head = (*head)->next;
free(strip);
}
head = NULL;
}