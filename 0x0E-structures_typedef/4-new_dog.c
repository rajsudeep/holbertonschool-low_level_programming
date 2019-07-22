#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return dog structure
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!(name) || !(owner))
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog)
	{
		new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (!(new_dog->name))
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (!(new_dog->owner))
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}

		new_dog->name = _strcpy(new_dog->name, name);
		new_dog->owner = _strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}
	return (new_dog);
}

/**
 * _strlen - finds and returns length of string
 *
 * @s: string value
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	return (length);
}

/**
 * *_strcpy - copies string from src to dest
 *
 * @dest: destination to copy string to
 * @src: source where string is copied from
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (src[length] != '\0')
		length++;
	for (; i < length + 1; i++)
		dest[i] = src[i];
	return (dest);
}
