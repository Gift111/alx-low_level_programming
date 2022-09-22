#include "main.h"

/**
 * _strncat - appends src to dest
 * @dest: src is appended to dest
 * @src: stringto append to dest
 * @n: largest number of bytes to append
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	while (*(dest + x))
		x++;
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	if (y < n)
		*(dest + x) = *(src + y);
	return (dest);
}
