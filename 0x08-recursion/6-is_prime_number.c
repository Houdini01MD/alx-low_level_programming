#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number
 * Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_if_prime(n, 2));
}

/**
 * check_if_prime - check if prime or not
 * @n: the munmer
 * @i: variable type int
 * Return: int
*/
int check_if_prime(int n, int i)
{
	if (n == 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (i >= n / 2)
		return (1);
	else
		return (check_if_prime(n, i + 1));
}
