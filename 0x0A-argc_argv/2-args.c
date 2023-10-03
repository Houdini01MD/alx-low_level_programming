#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
	int a;

	if (argc > 0)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}
