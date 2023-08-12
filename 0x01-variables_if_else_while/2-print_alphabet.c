#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  a program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
