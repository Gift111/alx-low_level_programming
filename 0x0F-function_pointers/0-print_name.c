#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to the printing function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name) ;
}
