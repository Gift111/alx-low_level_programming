#include <stdio.h>

/**
 * race - function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 * Return: none
 */

void __attribute__ ((constructor)) race()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
