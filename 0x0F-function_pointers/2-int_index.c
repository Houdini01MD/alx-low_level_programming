#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to search in
 * @size: sier of array
 * @cmp: pointer to function to be used to compare value
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	int s;

	if (array && cmp)
	{
		for (s = 0; s < size; s++)
		{
			if (cmp(array[s]) != 0)
				return (i);
		}
	}
	return (-1);
}
