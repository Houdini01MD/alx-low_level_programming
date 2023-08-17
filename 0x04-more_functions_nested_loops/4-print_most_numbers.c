#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 *			Do not print 2 and 4
 *
 *Return: numbers from 0 to 9
 *		 without 2 & 4
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
