#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add a new node in a specific position
 * @head: is a pointer
 * @idx: is an int
 * @n: is an int
 * Return: 0 (successs)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *t, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp && i < idx)
	{
		t = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL && i < idx)
	{
		return (NULL);
	}
	t->next = new;
	new->next = temp;
	return (new);
}
