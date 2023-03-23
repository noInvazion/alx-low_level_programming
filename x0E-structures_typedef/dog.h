#ifndef DOG_H
#define DOG_H
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - dog structure
 * @name: name member
 * @age: age member
 * @owner: owner member
 * noInvazion
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog;

#endif
