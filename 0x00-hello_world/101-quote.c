#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: a C program that prints exactly followed by a new line
 *
 * Return: Always 1 (Not Success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
