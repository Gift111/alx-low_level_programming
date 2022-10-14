#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the
 * division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: returns the remainder of the
 * division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
