#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if are less of 2 arguments otherwise 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	int r = x * y;

	printf("%d\n", r);

	return (0);
}
