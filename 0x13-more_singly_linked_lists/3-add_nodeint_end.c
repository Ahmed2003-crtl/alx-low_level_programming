#include<stdio.h>
#include"lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - add a new node a the end of the list
 * @head: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *key;

	temp->n = n;
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
		return (*head);
	}
	key = *head;
	while (key->next != NULL)
	{
		key = key->next;
	}
	temp->next = key->next;
	key->next = temp;
	return (temp);
}
