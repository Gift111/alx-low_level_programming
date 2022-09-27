#include "main.h"

/**
 * *_memcpy - copies memory area src to memory area dest
 * @dest: dest memory area
 * @src: src memory area
 * @n: bytes from memory area to copy
 * 
 * Return: replaced memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for(d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}

	return (dest);
}
