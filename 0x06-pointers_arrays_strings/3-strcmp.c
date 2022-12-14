#include "main.h"

/**
 * _strcmp - func compares two strings
 * @s1: first string
 * @s2: second string
 * Return: zero if two strings are equal
 * if not print a different number
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
