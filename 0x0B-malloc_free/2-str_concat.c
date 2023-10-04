#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: the string one
 * @s2: the string two
 * Return: pointer to a new string
*/

char *str_concat(char *s1, char *s2)
{
	size_t i;
	size_t length1 = 0, length2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	ptr = malloc((length1 + length2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		ptr[length1 + i] = s2[i];
	}
	ptr[length1 + length2] = '\0';
	return (ptr);
	free(ptr);
}
