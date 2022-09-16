#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @d: parameter
 * Return: returns result
 */

void print_diagonal(int d)
{
	int co, space;

	if (d > 0)
	{
		for (co = 0; co < d; co++)
		{
			for (space = 0; space < co; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			
			if (co == (d - 1))
				continue;
			else
				_putchar('\n');
		}
	}
	_putchar('\n');
}
