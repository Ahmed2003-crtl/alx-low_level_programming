#include<stdio.h>
#include"lists.h"
/**
 * print_list - print the elements of the list
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL ; i++)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		printf("\n");
		h = h->next;
	}
	return (i);
}
