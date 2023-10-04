#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: pointer to a new string
*/

char *_strdup(char *str)
{
	int i, length = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	free(ptr);
}


