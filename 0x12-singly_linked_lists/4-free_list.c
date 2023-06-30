#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_list - it will free the list
 * @head: is a pointer
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
