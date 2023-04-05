#include "main.h"
/**
 * _strlen_recursion - print the len of str
 * @s: is a pointer
 * Return: 0 (success)
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
