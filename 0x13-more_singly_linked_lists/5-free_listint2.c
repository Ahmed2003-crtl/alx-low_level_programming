#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_listint2 - free the list
 * @head: is a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
}
