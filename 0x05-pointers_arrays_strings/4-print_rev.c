#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: the string
 *
 * Return: void
*/

void print_rev(char *s)
{
	int len  = 0;
	int z;

	while (s[len] != '\0')
	{
		len++;
	}
	for (z = len - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
