#include<stdio.h>
#include"lists.h"
/**
 * sum_listint - calculate the sum of data(n) in the list
 * @head: is a pointer
 * Return: 0 (success)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
