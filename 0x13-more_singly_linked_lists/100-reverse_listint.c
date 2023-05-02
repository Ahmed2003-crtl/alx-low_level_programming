#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverse the list
 * @head: is a pointer
 * Return: 0 (success)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *p;

	while ((*head)->next != NULL)
	{
		p = (*head)->next;
		(*head)->next = p->next;
		p->next = temp;
		temp = p;
	}
	*head = temp;
	return (*head);
}
