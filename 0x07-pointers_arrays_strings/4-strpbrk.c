#include "main.h"

/**
 * _strpbrk - search string for set of bytes
 * @s: source string
 * @accept: accepted character
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int c = 0, d;

	while (s[c])
	{
		d = 0;

		while (accept[d])
		{
			if (s[c] == accept[d])

			{
				s += c;
				return (s);
			}

			d++;

		}

		c++;
	}

	return ('\0');
}
