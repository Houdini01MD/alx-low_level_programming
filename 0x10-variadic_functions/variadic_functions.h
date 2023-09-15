#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char p);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list ptr);
void print_integer(char *separator, va_list ptr);
void print_float(char *separator, va_list ptr);
void print_char_pt(char *separator, va_list ptr);

/**
 * struct types_format - struct format type
 * @specifier: the specifier
 * @p: function pointer
*/
typedef struct types_format
{
	char *specifier;
	void (*p)(char *separator, va_list ptr);
} p_tf;
#endif
