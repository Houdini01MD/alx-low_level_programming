#include <stdio.h>

/**
 * main - Entry point
 *
 * Fizz-Buzz - program that prints the numbers from 1 to 100
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz");
			continue;
		}
		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz");
			continue;
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			continue;
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
