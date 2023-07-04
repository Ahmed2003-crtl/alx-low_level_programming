#include<stdio.h>
#include"lists.h"
/**
 * print_listint - print the number of nodes in the list
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL ; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
