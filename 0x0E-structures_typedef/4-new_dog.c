#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @str: the string
 * Return: the length of the string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * *_strcopy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
*/

char *_strcopy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: pointer to the new dog (Success)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenN, lenO;

	lenN = _strlen(name);
	lenO = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenN + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lenO + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcopy(dog->name, name);
	_strcopy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
