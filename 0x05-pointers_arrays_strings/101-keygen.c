#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
		putchar(b);
	}
	putchar(2772 - s);
	return (0);
}
