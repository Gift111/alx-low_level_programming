#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Ommit alphabets
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
