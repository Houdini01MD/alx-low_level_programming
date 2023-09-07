#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	unsigned int size_kaml;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size_kaml = nmemb * size;
	p = malloc(size_kaml);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < size_kaml; x++)
		((char *)p)[x] = 0;
	return (p);
}
