#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: start number
 *
 * Return: 0 (success)
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
