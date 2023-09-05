#include "main.h"
#include <stdlib.h>

/**
 * str_len - find lenght of string
 * @s: string
 * Return: int
*/

int str_len(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - concatenates all the arguments.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *		separated by newline characters ('\n'). If ac == 0 or av == NULL,
 *		or if memory allocation fails, returns NULL.
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int c = 0, mp = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, c = 0; i < ac; i++, c++)
		c += str_len(av[i]);

	ptr = malloc(sizeof(char) * c + 1);
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, mp++)
			ptr[mp] = av[i][j];

		ptr[mp] = '\n';
		mp++;
	}
	ptr[mp] = '\0';
	return (ptr);
}
