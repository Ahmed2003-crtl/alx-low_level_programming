#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: is a pointer
 * @f: is pointer of a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
