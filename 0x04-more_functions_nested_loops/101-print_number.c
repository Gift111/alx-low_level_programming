#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @a: the number to print
 */

void print_number(int a)
{
	unsigned int num = a;

	if (a < 0)
	{
		putchar('_');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
