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
	int l  = 0;

	for (; n > 0; i++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
