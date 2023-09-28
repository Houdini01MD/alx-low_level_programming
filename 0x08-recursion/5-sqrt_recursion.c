#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(n, 1));
}

/**
 * _sqrt - calcul sqrt
 * @n: the number
 * @y: guess number
 * Return: int
*/
int _sqrt(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y > n)
		return (-1);
	else
		return (_sqrt(n, y + 1));
}
