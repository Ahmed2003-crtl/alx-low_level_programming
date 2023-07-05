#include<stdio.h>
#include"lists.h"
/**
 * reverse_listint - reverse the linked list
 * @head: is a pointer
 * Return: 0 (success)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *new;

	temp = temp->next;
	new = temp;
	temp = temp->next;
	(*head)->next = NULL;
	while (new->next != NULL)
	{
		new->next = *head;
		*head = new;
		new = temp;
		temp = temp->next;
	}
	new->next = *head;
	*head = new;
	return (*head);
}
