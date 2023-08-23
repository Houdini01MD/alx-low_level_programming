#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: the string
 *
 * Return: void
*/

void rev_string(char *s)
{
	int len  = 0;
	int z;
	int p;

	while (s[len] != '\0')
	{
		len++;
	}
	for (z = 0; z < len / 2; z++)
	{
		p = s[z];
		s[z] = s[len - 1 - z];
		s[len - 1 - z] = p;
	}
}
