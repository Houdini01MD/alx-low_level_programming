#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	p_tf types_format[] = {
		{"c", print_char},
		{"i", print_integer},
		{"c", print_float},
		{"s", print_char_pt},
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types_format[j].specifier)
			{
				types_format[j].p(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}

/**
 * print_char - prints character
 * @separator: The separator of the character
 * @ptr: A list of variadic arguments
 * Return: void
*/

void print_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * print_integer - prints integer
 * @separator: The separator of the character
 * @ptr: A list of variadic arguments
 * Return: void
*/

void print_integer(char *separator, va_list ptr)
{
	printf("%s%i", separator, va_arg(ptr, int));
}

/**
 * print_float - prints float
 * @separator: The separator of the character
 * @ptr: A list of variadic arguments
 * Return: void
*/

void print_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * print_char_pt - prints char_pt
 * @separator: The separator of the character
 * @ptr: A list of variadic arguments
 * Return: void
*/

void print_char_pt(char *separator, va_list ptr)
{
	char *pptr = va_arg(ptr, char *);

	if (pptr == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, pptr);
}
