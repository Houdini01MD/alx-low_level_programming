#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 *@a: variable type int
 *@n: variable type int
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, z;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		z = a[i];
		a[i] = a[j];
		a[j] = z;
	}
}
