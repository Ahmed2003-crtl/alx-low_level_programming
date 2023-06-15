#include<stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: is an int
 * @size: is an int
 * Return: 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);
	if (p == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (p);
}
