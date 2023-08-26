#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that generates random valid passwords
 *
 * Return: 0 (success)
*/

int main(void)
{
	int s;
	char b;

	srand(time(NULL));
	while (s <= 2645)
	{
		b = rand() % 128;
		s = s + b;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
