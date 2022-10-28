#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index.
 * @index: index
 * @n: pointer to unsigned long int
 * Return: 1 if it worked
 * or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}