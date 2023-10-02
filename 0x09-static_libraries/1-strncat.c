#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: variable type char
 * @src: variable type char
 * @n: variable type int
 *
 * Return: string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
