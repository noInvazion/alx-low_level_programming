#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - sturcture for dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Description: This is a structure that collects dog details
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
