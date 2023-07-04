#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: is a pointer
 * @idx: is an int
 * @n: is an int
 * Return: 0 (success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *key;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	key = *head;
	for (i = 0 ; key && i < idx - 1 ; i++)
		key = key->next;
	temp->next = key->next;
	key->next = temp;
	return (temp);
}
