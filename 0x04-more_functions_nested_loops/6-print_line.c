#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @s: parameter
 * Return: returns result
 */

void print_line(int s)
{
	while (s-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
