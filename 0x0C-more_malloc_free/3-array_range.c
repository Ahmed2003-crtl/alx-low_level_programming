#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: is an int
 * @max: is an int
 * Return: 0 (success)
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((min + max + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
