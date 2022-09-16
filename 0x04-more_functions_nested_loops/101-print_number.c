#include "main.h"
/**
 * print_number - prints a number
 * @a: the number to print
 * Return: 0
 */

void print_number(int a)
{
	unsigned int x;

	x = a
	if (a < 0)
	{
		_putchar(45);
		x = -a;
	}
	if (x / 10)
		print_number(x / 10);
		_putchar((x % 10) + '0');
}
