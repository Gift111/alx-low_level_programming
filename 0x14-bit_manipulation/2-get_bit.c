#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value
 * of a bit at a given index.
 * @n: unsigned long int
 * @index: index
 * Return: the value of the bit at index
 * index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int un;

	if (n == 0 && index < 64)
		return (0);

	for (un = 0; un <= 63; n >>= 1, un++)
	{
		if (index == un)
		{
			return (n & 1);
		}

	}

	return (-1);
}
