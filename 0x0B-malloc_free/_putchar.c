#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character p to stdout
 *
 * @p: the character
 *
 * Return: on success 1
*/

int _putchar(char p)
{
	return (write(1, &p, 1));
}
