#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print the values of the elements which are exist in struct dog
 * @d: is a pointer
 * Return: 0 (success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == '\0' || d->owner == NULL)
		printf("(nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}