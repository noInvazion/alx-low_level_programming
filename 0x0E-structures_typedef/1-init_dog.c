#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: variable d
 * @name: variable name
 * @age: variable age
 * @owner: variable owner
 * noInvazion
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
