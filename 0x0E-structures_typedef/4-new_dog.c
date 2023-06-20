#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -  store a copy of name and owner
 * @name: is a pointer
 * @age: is a float var
 * @owner: is a pointer
 * Return: 0 (success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL || name == NULL || owner == NULL)
		return (NULL);
	p->name = name;
	p->owner = owner;
	p->age = age;
	return (p);
}
