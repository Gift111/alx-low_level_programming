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

	if (d <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= d; co++)
		{
			for (space = 1; space < co; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			
			_putchar('\n');
		}
	}
	_putchar('\n');
}
