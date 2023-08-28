#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: variable type char
 * @src: variable type char
 * @n: variable type int
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
