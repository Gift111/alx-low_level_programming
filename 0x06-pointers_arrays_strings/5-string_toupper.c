#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */

char *string_toupper(char *)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
