#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 *
 * Return: int
*/

int *array_range(int min, int max)
{
	int i, tol;
	int *arry;

	if (min > max)
		return (NULL);
	tol = max - min + 1;
	arry = malloc(sizeof(int) * tol);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < tol; i++)
	{
		arry[i] = min;
		min++;
	}
	return (arry);
}
