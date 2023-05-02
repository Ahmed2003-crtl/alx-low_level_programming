#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delet node at specific index
 * @head: is a pointer
 * @index: is an int
 * Return: 0 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *t;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && i < index)
	{
		t = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL && i < index)
	{
		return (-1);
	}
	t->next = temp->next;
	free(temp);
	return (1);
}

