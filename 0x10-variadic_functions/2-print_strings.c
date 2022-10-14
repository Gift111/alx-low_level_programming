#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int c;
	char *str;

	va_start(valist, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(valist, char*);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (c < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
