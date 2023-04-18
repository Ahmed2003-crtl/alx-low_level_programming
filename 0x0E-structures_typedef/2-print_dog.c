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
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
	{
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
