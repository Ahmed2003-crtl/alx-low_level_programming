#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of list
 * @head: is a poiner
 * @n: is an int
 * Return: 0 (success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	else if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	node->n = n;
	node->next = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (temp);
}
