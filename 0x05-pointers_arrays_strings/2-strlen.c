#include "main.h"

/**
 * _strelen - returns the length of string
 * @s - string
 * Return: return length as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
