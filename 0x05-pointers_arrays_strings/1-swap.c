#include "main.h"

/**
 * swap_int - swap two integer values
 * @c: first integer
 * @d: second integer
 * Return: 0
 */

void swap_int(int *c, int *d)
{
	int tmp = *c;

	*c = *d;
	*d = tmp;
}
