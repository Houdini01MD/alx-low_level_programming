#include "main.h"
#include <stdlib.h>

/**
 * cntwr - counts the number of words in s a string
 * @str: the string
 * Return: int
*/

int cntwr(char *str)
{
	int i;
	int x = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				x++;
		}
		else if (i == 0)
		{
			x++;
		}
	}
	x++;
	return (x);
}

/**
 * strtow - function that splits a string into words.
 * @str: string
 * Return: string
*/

char **strtow(char *str)
{
	int i, j, x, y, c = 0, w = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = cntwr(str);
	if (c == 1)
		return (NULL);
	p = (char **)malloc(c * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[c - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			p[w] = (char *)malloc(j * sizeof(char));
			j--;
			if (p[w] == NULL)
			{
				for (x = 0; x < w; x++)
					free(p[x]);
				free(p[c - 1]);
				free(p);
				return (NULL);
			}
			for (y = 0; y < j; y++)
				p[w][y] = str[i + y];
			p[w][y] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (p);
}
