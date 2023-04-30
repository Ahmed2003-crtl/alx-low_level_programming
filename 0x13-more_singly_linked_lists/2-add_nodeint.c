#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - make a new node
 * @head: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}

