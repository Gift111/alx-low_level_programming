#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + 1) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
