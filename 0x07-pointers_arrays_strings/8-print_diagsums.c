#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: the matrix
 * @size: the size
 * Return: NULL
 */
void print_diagsums(int *a, int size)
{
	int d, sum1 = 0, sum2 = 0;

	for (d = 0; d < size; d++)
	{
		sum1 += a[(size + 1) * d];
		sum2 += a[(size - 1) * (d + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
