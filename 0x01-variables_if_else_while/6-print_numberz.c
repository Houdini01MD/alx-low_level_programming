#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  a program that prints all single digit numbers of base 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
