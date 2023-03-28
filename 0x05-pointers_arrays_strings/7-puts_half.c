#include "main.h"
#include <string.h>
/**
 * puts_half - print the half of the str
 * @str: is a pointer
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	unsigned long int i;
	int n;

	if (strlen(str) % 2 == 0)
	{
		for (i = strlen(str) / 2 ; i < strlen(str) ; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (strlen(str) % 2 != 0)
	{
		n = (strlen(str) + 1) / 2;
		for (i = n ; i < strlen(str) ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
