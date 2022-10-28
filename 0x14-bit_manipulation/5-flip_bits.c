#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from
 * one number to another.
 * @n: unsigned long int one
 * @m: unsigned long int two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r;

	for (r = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			r++;
	}

	return (r);
}
