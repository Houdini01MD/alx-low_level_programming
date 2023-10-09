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
	void *ptr;
	char *char_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (ptr);

}
