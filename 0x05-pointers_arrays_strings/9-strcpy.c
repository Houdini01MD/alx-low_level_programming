#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: char type string
 * @src: char type string
 *
 * Description: copies the string pointed to by src,
 *		to the buffer pointed to by dest
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');
	return (dest);
}
