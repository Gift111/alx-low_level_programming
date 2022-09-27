#include "main.h"

/**
 * _strspn - get length of a prefix sub string
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, t = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				t++;
			}

			j++;

		}

		i++;
	}

	return (t);
}
