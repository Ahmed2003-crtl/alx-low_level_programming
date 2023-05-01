#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: is a pointer
 * Return 0 (success)
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}
