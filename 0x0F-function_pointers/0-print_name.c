#include "function_pointers.h"
/**
 * print_name - print the name
 * @f: is a pointer
 * @name: is a char
 * Return: 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

