#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr (in bytes)
 * @new_size: New size of the memory block
 *
 * Return: A pointer to the newly allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_jdid;

	if (ptr == NULL)
		return (malloc(ptr_jdid));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr_jdid = malloc(new_size);
	if (ptr_jdid == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	for (unsigned int i = 0; i < old_size; i++)
		((char *)ptr_jdid)[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptr_jdid);
}
