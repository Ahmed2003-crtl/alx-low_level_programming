#include "main.h"
/**
 *  print_triangle - print triangle with #
 *  @size: is an int
 *  Return: 0 (success)
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (k = size - i ; k > 0 ; k--)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
