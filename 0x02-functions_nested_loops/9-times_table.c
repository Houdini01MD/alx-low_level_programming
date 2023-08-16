#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: 0 (success)
*/

void times_table(void)
{
	int n;
	int ml;
	int p;

	for (n = 0; n <= 9; ml++)
	{
		_putchar(48);
		for (ml = 1; ml <= 9; ml++)
		{
			_putchar(',');
			_putchar(' ');
			p = ml * n;
			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + 48);
			}
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
