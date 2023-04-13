#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - make the calloc function
 * @nmemb: is an int
 * @size: is an int
 * Return: 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *i;

	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (i);
}
