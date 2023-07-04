#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_listint - free the list
 * @head: is a pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
