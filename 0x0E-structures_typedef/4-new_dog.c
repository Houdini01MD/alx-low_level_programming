#include "dog.h"
#include <string.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (0);

	l = 0;
	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= l; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}

/**
* new_dog - function that creates a new dog.
*
* @name: name of dog
* @age: age of dog
* @owner: dog's owner
*
* Return: returns a pointer to a struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = _strdup(name);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = _strdup(owner);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
