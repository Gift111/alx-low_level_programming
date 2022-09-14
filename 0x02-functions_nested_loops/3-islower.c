#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: int used for argument of function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
