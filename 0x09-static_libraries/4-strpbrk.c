#include "main.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 *
 * @s: variable type char
 * @accept: variable type char
 *
 * Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *ptr;

	x = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				ptr = &s[x];
				return (ptr);
			}
			y++;
		}
		x++;
	}
	return (0);
}
