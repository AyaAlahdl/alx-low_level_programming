#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;

	return (l);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;

	if (!name || age < 0 || !owner)
		return (NULL);

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
		return (NULL);

	dogo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogo->name == NULL)
	{
		free(dogo);
		return (NULL);
	}

	dogo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogo->owner == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}

	dogo->name = _strcopy(dogo->name, name);
	dogo->age = age;
	dogo->owner = _strcopy(dogo->owner, owner);

	return (dogo);
}
