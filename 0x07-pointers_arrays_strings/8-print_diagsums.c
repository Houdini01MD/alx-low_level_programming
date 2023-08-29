#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *			of a square matrix of integers.
 * @a:variable type
 * @size:variable type char
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}
	printf("%d, ", x);
	printf("%d, ", y);
}
