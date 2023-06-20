#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: is a pointer
 * @name: is a pointer
 * @age: is a float
 * @owner: is a pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p = d;

	if (p == NULL)
		p = malloc(sizeof(struct dog));
	p->name = name;
	p->age = age;
	p->owner = owner;
}
