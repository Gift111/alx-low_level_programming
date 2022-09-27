#include "main.h"

/**
 * *_memcpy - copies memory area src to memory area dest
 * @dest: destination
 * @src: copy from
 * @n: copy to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for(; i < n; i++)
	{
		dest[i] = src[i]
	}

	return (dest);

}
