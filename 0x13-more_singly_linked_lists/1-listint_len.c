#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print the numb of elements which are exit in nodes
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}

