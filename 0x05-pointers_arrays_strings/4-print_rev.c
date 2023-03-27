#include "main.h"
#include <string.h>
/**
 * print_rev - print the string in rev
 * @s: is a pointer
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
