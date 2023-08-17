#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: numbers 0-14 10 times
*/

void more_numbers(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j;

			if (j > 9)
			{
				_putchar(1 + '0');
				x = j % 10;
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
