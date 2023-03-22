#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the naural numbers
 * @n: is an int
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n ; j >= 98 ; j--)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
}
