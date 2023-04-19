#include "function_pointers.h"
#include <stddef.h>
#include <stddef.h>
/**
 * array_iterator - print the elements of the array
 * @array: is a pointer
 * @size: is the size of the arr
 * @action: is a pointer
 * Return: 1 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
