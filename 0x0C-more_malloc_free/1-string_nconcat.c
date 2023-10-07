#include "main.h"

/**
* string_nconcat - function that concatenates two strings.
*
* @s1: first string
* @s2: second string
* @n: number of caracter from s2
*
* Return: pointer point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, length, i, j;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
	{
		length1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		length2++;
		s2++;
	}

	length = length1 + n;

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
		exit(0);
    
    s1 -= length1;
    s2 -= length2;

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';

	return (ptr);
}
