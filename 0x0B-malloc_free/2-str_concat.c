#include "main.h"
#include <stdlib.h>

/**
 * len_string - find length of string
 * @str: string
 * Return: int
*/

int len_string(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: string number 1
 * @s2: string number 2
 * Return: string
*/

char *str_concat(char *s1, char *s2)
{
	int strlen1, strlen2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	strlen1 = len_string(s1);
	strlen2 = len_string(s2);
	ptr = malloc((strlen1 + strlen2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);
	for (i = 0; i <= strlen1 + strlen2; i++)
	{
		if (i < strlen1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen1];
	}
	ptr[i] = '\0';
	return (ptr);
}
