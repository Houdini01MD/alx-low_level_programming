#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array && cmp)
	{
		for (s = 0; s < size; s++)
		{
			if (cmp(array[s] != 0)
				return (s);
		}
	}
	return (-1);
}
