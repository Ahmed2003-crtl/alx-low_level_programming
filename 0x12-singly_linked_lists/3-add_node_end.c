#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add a node at the end of the list
 * @head: is a pointer
 * @str: is a pointer
 * Return: 0 (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *k = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (k->next != NULL)
		k = k->next;
	k->next = temp;
	return (temp);
}
