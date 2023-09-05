#include "main.h"

/**
 * _strdup - function that returns a pointer
 *		to a newly allocated space in memory
 * @str: variable type char
 * Return: a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int cn;
	int size;
	char *pt;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	pt = malloc(size * sizeof(*str) + 1);
	if (pt == 0)
	{
		return (NULL);
	}
	else
	{
		for (cn = 0; cn < size; cn++)
		{
			pt[cn] = str[cn];
		}
	}
	return (pt);
}
