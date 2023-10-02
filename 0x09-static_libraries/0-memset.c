#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: variable type char
 * @b: variable type char
 * @n: variable type int
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
