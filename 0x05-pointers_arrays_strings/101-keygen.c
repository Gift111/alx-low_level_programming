#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry
 *
 * Return: password
 */

int main(void)
{
	char c;
	int p;

	srand(time(0));
	while (p <= 2645)
	{
		c = rand() % 128;
		p += c;
	}
	putchar(2772 - x);

	return (0);
}
