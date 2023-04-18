#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - make a copy of the struct
 * @name: is a pointer
 * @age : is a float
 * @owner: is a pointre
 * Return: 0 (success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
