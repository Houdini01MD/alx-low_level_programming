#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character p to stdout
 * @p : the character to print
 *
 * Return : on success 1.
 *         on error. -1 is returned, and errno is set appropri ately.
*/

int _putchar(char p)
{
	return (write(1, &p, 1));
}
