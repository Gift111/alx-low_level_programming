#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @d: parameter
 * Return: returns result
 */

void print_diagonal(int d)
{
	int len, space;

	if (d > 0)
	{
		for (len = 0; len < d; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			
			if (len == (d - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
