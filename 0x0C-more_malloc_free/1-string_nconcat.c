#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int tol1 = 0, tol2 = 0, i, j;
	char *pt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[tol1] != '\0')
		tol1++;
	while (s2[tol2] != '\0')
		tol2++;
	if (n >= tol2)
		n = tol2;
	pt = malloc(sizeof(char) * (tol1 + n + 1));
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < tol1; i++)
		pt[i] = s1[i];
	for (j = 0; j < n; j++)
		pt[i + j] = s2[j];
	pt[i + j] = '\0';
	return (pt);
}
