#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the located substring else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int c = 0, d = 0;

	while (haystack[c])
	{
		while (needle[d])
		{
			if (haystack[c + d] != needle[d])
			{
				break;
			}

			d++;
		}

		if (needle[d] == '\0')
		{
			return (haystack + c);
		}

		c++;
	}

	return ('\0');
}
