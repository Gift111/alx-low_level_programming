#include main.h

/**
 * strcat - fucntion
 * @dest: Pointer to the string that should be concatenated 
 * @src: string to be appended to @dest
 *
 * Return: pointer to the @dest string
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
