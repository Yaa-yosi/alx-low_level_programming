#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - print a struct dog
 *@d: pointer to datatype
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
