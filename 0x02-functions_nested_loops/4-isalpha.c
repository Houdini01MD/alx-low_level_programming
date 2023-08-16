#include "main.h"

/**
 * _isalph - check if character is a letter
 *		botn lowercase or uppercase
 *
 * @c: check input of function
 *
 * Return: Returns 1 if 'c' is a letter
 *		otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	return (0);
}
