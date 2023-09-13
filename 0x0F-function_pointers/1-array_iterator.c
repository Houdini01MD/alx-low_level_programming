#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter of an array
 * @array: array type int
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (!array || !action)
	{
		return;
	}
	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}
