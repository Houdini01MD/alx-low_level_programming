#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch <= 7; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
