#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: string
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)

	return (i);
}

/**
 * _strcpy - This function copies a string to the buffer
 * @dest: destination string pointer
 * @src: source string pointer
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int strl = 0;
	int i;

	for (strl = 0; src[strl] != '\0'; strl++)

	for (i = 0; i < strl; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - This function creates a new dog :)
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int strl1, strl2;

	strl1 = _strlen(name);
	strl2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc((strl1 + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((strl2 + 1) * sizeof(char));
	if (dog->owner == NULL)
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
