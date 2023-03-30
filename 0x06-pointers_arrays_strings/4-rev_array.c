#include "main.h"
#include <string.h>
/**
 * reverse_array - print the numbers of the numbers in reverse
 * @a: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;
	int k = 0;

	for (i = n - 1 ; i > 6 ; i--)
	{
		rev = a[i];
		a[i] = a[k];
		a[k] = rev;
		k++;
	}
}

