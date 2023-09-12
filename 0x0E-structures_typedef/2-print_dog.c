#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: variable type dog
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s", d->owner);
	}
}
