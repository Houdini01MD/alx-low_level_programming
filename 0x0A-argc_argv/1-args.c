#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int number;

	for (number = 0; number < argc;)
	{
		number++;
		(*argv)++;
	}
	printf("%i\n", number - 1);
	return (0);
}
