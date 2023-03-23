#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is an int
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(92);
			_putchar('\n');
			if (n > i)
			{
				for (j = 0 ; j < i ; j++)
				{
					_putchar(' ');
				}
			}
		}
	}
}
