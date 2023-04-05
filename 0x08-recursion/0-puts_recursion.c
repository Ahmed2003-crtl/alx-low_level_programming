#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: is a pointer
 * Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
