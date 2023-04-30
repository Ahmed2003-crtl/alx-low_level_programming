#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print the content of nodes
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
		printf("\n");
	}
	return (i);
}
