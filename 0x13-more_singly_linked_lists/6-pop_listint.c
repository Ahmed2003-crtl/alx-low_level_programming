#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - print the data of the first node
 * @head: is a pointer
 * Return: 0 (success)
 */
int pop_listint(listint_t **head)
{	listint_t *temp;
	int i = (*head)->n;

	if ((*head)->n == ' ')
	{
		return (0);
	}
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
