#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: variable type int
 * @m: square root type int
 *
 * Return: the natural square root
*/

int sq(int n, int m);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - Found the natural square root
 * @n:variable type int
 * @m: square root type int
 * Return: int
*/

int sq(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (sq(n, m + 1));
	else
		return (-1);
}
