#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print alphabet at reverse
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}

	putchar('\n')

	return (0);
}
