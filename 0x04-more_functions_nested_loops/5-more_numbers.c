#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: returns result
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 >= 10)
			{
				_putchar((n2 / 10) + '0');
			}
				_putchar((n2 % 10) + '0');
		}
		_putchar('\n');
	}
}