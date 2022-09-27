#include "main.h"

/**
 * _memset - func to fill a block of memory
 * @s: memory area
 * @b: constant byte to fill
 * @n: number of bytes of memory area
 * Return: return filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}

	return (s);
}
