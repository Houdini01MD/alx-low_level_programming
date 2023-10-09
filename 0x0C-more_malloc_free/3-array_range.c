#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: nim number
 * @max: max number
 *
 * Return: pointer to the newly allocated memory.
*/

int *array_range(int min, int max)
{
	int *ptr;
	int size = 0, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);

}
