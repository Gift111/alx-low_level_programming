#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int c, d;
if (argc == 3)
{
c = atoi(argv[1]);
d = atoi(argv[2]);
printf("%d\n", c * d);
return (0);
}
printf("Error\n");
return (1);
}
