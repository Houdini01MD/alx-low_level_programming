#include "main.h"

/**
 * is_prime_number - function that check if n is a prime number
 *
 * @n: variable type int
 * @p: variable type int
 *
 * Return: returns 1 if the input integer is a prime number
 *			otherwise return 0.
*/

int is_prime(int n, int p);
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - check if n prime
 *
 * @n: variable type int
 * @p: variable type int
 *
 * Return: int
*/

int is_prime(int n, int p)
{
	if (p >= n && n > 1)
		return (1);
	else if (n % p == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, p + 1));
}
