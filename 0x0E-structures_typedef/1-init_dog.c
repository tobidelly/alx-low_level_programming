#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - The function to execute the struct dog.
 * @d: pointer to struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
