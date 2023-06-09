#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter on element of array
 * @array: is an array
 * @size: is the size of the array
 * @action: is the function which will be executed on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
