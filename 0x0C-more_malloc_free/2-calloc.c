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
	char *p;
	char b = 0;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb ; i++)
	{
		p[i] = b;
	}
	return (p);
}
