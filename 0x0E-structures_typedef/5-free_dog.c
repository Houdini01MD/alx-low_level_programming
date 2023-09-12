#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: struct dog
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
