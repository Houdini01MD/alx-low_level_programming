#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 *@s1: variable type char
 *@s2: variable type char
 *
 * Return: q value
*/

int _strcmp(char *s1, char *s2)
{
	int q = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			q = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (q);
}
