#include "main.h"
/**
 * print_array - print the elements of array
 * @a: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
