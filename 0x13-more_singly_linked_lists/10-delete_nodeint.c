#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: is a pointer
 * @index: is an int
 * Return: 0 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *link;
	unsigned int i;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0 ; temp && i < index ; i++)
	{
		link = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	link->next = temp->next;
	free(temp);
	return (1);
}
