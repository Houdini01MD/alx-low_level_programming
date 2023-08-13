#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible single-digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
