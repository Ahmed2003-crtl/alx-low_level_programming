#include "main.h"
/**
 *times_table - print the tables of numbers from 0 to 9
 *Return: 0 (sucess)
 */
void times_table(void)
{
	int res, i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			res = i * j;
			if (res <= 9)
			{
				_putchar(res + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
