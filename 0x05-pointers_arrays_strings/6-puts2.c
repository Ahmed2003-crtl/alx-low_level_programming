#include "main.h"
#include <string.h>
/**
 * puts2 - print charcters
 * @str: is a pointer
 * Return: 0 (success)
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(str) ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
