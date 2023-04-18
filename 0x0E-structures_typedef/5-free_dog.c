#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the hole address
 * @d: is a pointer
 * Return: 0 (success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
