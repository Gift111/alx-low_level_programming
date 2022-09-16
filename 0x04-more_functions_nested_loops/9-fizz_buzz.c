#include <stdio.h>

/**
 * main - program that prints numbers or fizz or buzz
 * or fizzbuzz based on scenario
 *
 * Return: result
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d Â", num);
		}
	}
	printf("\n");
	return (0);
}
