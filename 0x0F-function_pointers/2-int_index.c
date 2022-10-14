#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: return the first element for
 * which the cmp function does not return 0
 * However if no element matches
 * or size is negative, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1);
}
