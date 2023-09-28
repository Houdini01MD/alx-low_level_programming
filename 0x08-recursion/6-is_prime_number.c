#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number
 * Return: int
*/
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		for (i = 5; i * i <= n; i += 6)
		{
			if (n % i == 0 || n % (i + 2) == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
