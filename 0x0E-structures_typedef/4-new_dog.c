#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - checks the length of a string
 * @s: string parameter
 *
 * Return: strlen
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: input name
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: nu_dog (success) if not NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenA, lenB;

	lenA = _strlen(name);
	lenB = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(dog_t) * (lenA + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lenB + 1));
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
