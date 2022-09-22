#include "main.h"

/**
 * _strncpy.c - copies string
 * @dest: destination
 * @src: source file
 * @n: amount of bytes from src
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a]
	for (;a < n; a++)
		dest[a] = '\0';

	return (dest);
}
