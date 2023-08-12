#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 'o');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
