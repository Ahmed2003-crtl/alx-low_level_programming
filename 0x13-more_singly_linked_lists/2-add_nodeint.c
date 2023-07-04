#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_nodeint - add a new node at the begging of the list
 * @head: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
