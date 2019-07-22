#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes the dog structure
 *
 * @d: structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
