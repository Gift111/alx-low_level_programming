#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print numbers from 0 to 9
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
