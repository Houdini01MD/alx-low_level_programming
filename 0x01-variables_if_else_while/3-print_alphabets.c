#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (CH <= 'Z')
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
