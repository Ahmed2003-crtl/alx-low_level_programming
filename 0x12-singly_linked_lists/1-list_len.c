#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - print the length of elements in the list
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}

