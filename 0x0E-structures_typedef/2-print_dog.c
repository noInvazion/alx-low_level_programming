#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that works with structs
 * @d: variable d
 * noInvazion
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
