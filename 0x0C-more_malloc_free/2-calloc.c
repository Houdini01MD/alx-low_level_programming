#include "main.h"

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 *
 * @nmemb: numbers of element
 * @size: size of element
 *
 * Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	return (ptr);

}
