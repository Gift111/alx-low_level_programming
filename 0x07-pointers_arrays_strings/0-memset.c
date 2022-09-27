#include "main.h"

/**
 * _memset - func to fill a block of memory
 * @s: starting address
 * @b: value
 * @n: number of bytes
 * Return: 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value
	
	return (memory);
}
