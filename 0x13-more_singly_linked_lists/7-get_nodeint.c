#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - print the index of node
 * @head: is a pointer
 * @index: is the index of the node
 * Return: 0 (success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
