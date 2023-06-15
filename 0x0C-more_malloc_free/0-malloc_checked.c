#include<stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate a space in the memory
 * @b: is a pointer
 * Return: 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
