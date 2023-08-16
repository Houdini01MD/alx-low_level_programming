#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the number to be checked
 *
 * Return: 0 (success)
*/

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (n % 10) * -1;
	}
	else
	{
		r = n % 10;
	}
	_putchar(r + '0');
	return (r);
}
