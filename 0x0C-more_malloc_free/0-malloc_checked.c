#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: space memory allocated
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
