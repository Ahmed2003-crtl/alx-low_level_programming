#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * create_array - allocate an array in a memory
 * @size: is the size of the array
 * @c: is the char which will be allocated in array
 * Return: 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(size * sizeof(char));
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}
	return (p);
}
