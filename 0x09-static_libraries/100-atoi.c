#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: variable type char
 *
 * Return: values in string
*/

int _atoi(char *s)
{
	unsigned int n = 0;
	int sg = 1;

	do {
		if (*s == '-')
		{
			sg = sg * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);
	return (n * sg);
}
