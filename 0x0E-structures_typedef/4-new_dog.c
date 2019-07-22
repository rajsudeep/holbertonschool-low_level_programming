#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
	return (new_dog);
}
