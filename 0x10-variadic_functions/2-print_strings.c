#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings  -  print strings
 * @separator: is a pointer
 * @n: is an int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(p);
	unsigned int i;
	char *text;

	va_start(p, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0 ; i < n ; i++)
	{
		text = va_arg(p, char*);
		if (text == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", text);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
