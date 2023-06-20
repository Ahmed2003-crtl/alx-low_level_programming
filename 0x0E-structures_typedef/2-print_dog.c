#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print all the elements of the struct dog
 * @d: is a pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d->name = "";
		printf("Age: \n");
		d->owner = "";
	}
	if (d->name == NULL)
	{
		d->name = "nil";
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	printf("Name: %s\n", d->name);
	if (d->age == '\0')
	{
		printf("Age: nil\n");
	}
	if (d->age != '\0' && d != NULL)
	{
		printf("Age: %f\n", d->age);
	}
	printf("Owner: %s\n", d->owner);
}

