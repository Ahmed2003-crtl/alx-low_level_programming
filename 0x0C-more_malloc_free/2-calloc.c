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
	char *i;
	unsigned int j;

	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (j = 0 ; j < (nmemb * size) ; j++)
		i[j] = 0;
	return (i);
}
