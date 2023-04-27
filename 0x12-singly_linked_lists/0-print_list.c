#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - print the number of elementes
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
		}
		j = j + 1;
		printf("\n");
		h = h->next;
	}
	return (j);
}
