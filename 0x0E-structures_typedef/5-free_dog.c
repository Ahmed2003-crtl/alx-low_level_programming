#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the space of struct my_dog
 * @d: is a pointer which will hold the address of my_dog
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
