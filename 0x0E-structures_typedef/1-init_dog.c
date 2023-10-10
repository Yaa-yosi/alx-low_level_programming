#include "dog.h"
/**
 *init_dog - initialize values to a struct datatype
 *@d: pointer to struct dog
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

