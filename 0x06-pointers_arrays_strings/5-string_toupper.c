#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return:pointer to changed string
 */

char *string_toupper(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
