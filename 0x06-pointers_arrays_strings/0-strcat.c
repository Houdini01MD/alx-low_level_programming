#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 *
 * @dest: variable type char
 * @src: variable type char
 *
 * Return: string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
