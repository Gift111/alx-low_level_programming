#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: array of argument
 *
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	int c, d, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	c = atoi(argv[1]);
	d = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && d == 0)
	{
		printf("Error\n");
		exit(100);
	}

	(return = func(c, d));

	printf("%d\n", result);

	return (0);
}
