#include<stdio.h>
#include"lists.h"
/**
 * get_nodeint_at_index - get the element which is exist inside the node
 * @head: is a pointer
 * @index: is an int
 * Return: 0 (success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	for (i = 0 ; i < index ; i++)
		temp = temp->next;
	return (temp);
}
