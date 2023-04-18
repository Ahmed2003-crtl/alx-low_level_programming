#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - put values to arguments
 * @d: is a pointer
 * @name: is a pointer
 * @age: is a pointer
 * @owner: is a pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
