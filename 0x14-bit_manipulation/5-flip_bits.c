#include "main.h"

/**
* flip_bits - Returns the number of bits needed to flip to get from one
* number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	unsigned long int result;

	result = n ^ m;

	while (result > 0)
	{
		c += result & 1;
		result >>= 1;
	}

	return (c);
}
