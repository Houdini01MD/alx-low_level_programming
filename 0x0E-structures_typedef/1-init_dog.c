#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
*
* @d: ponter to dog struct
* @name: string
* @age: variable type float
* @owner: variable type string
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
