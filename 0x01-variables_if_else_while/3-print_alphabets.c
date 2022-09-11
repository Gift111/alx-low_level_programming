#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry lowercase and uppercase
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
