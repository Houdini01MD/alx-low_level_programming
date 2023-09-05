#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c:char to be initialize
 * Return: a pointer to array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *pt = malloc(size);

	if (size == NULL || pt == NUUL)
	{
		return (0);
	}
	while (size--)
	{
		pt[size] = c;
	}
	return (pt);
}
