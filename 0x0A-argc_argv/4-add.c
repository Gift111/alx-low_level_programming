#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints addition of positive numbers
 * @argc: number of arguments
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0, c, d;
	for (c = 1; c < argc; c++)

	{
		for (d = 0; argv[c][d]; d++)
		{
			if (isdigit(argv[c][d]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		a += atoi(argv[c]);
	}
	printf("%d\n", a);
	return (0);
}
