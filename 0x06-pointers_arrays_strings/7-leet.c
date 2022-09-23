#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	int i, j;

	for(i = 0; *(s + i); i++)
	{
		for(j = 0; j <= 9; j++)
		{
			if(a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);

}
