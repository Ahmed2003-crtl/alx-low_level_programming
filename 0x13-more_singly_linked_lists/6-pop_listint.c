#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * pop_listint - pop the data of each node in the list
 * @head: is a pointer
 * Return: 0 (success)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
