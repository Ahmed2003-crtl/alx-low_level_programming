#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_node_end - add node in the end of the list
 * @head: is a pointer
 * @str: is a pointer
 * Return: the address of the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *k = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	while (k->next != NULL)
		k = k->next;
	temp->next = k->next;
	k->next = temp;
	return (temp);
}
