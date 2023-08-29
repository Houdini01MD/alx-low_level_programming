#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: variable type char
 * @needle: variable type char
 *
 * Return:  pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *y = haystack;
		char *l = needle;

		while (*l && *y == *l)
		{
			y++;
			l++;
		}
		if (*l == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
