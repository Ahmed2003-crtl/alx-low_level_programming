#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free the space of the nodes
 * @head: is a pointer
 * Return: 0 (success)
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
