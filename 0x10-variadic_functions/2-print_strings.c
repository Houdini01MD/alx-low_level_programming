#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(ptr, char*);

			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
			if (i != n - 1  && separator != NULL)
			{
				printf("%s", separator);
			}
			va_end(ptr);
		}
	}
	printf("\n");
}
