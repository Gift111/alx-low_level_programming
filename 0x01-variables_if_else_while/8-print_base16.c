#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	
	for(d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);

}
