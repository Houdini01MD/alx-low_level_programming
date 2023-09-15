#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameters number
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ptr;

		va_start(ptr, n);
		int i;
		int sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ptr, int);
		}
		va_end(ptr);
		return (sum);
	}
	return (0);
}
