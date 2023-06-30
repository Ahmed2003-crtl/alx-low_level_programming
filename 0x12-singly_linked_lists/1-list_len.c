#include<stdio.h>
#include"lists.h"
/**
 * list_len - print the length of the list
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0 ; h != NULL ; count++)
		h = h->next;
	return (count);
}
