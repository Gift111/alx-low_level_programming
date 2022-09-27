#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0, d, t = 0;

	while (accept[c])
	{
		d = 0;

		while (s[d] != 32)
		{
			if (accept[c] == s[d])
			{
				t++;
			}

			d++;

		}

		c++;
	}

	return (t);
}
