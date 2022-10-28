#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int z;
	char *b;

	z = 1;
	b = (char *) &z;

	return ((int)*b);
}
