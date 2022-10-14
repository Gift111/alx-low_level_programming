#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array to iterate
 * @size: Size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
