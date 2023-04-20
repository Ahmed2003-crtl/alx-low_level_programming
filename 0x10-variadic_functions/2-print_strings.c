#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print the string
 * @separator: is a char
 * @n: is an int
 * you will not be able to use va_arg(ptr, char*) directly
 * because it increase automically
 * if (va_arg(ptr, char*) == NULL)
 * and also you will not be able to type in another sentence
 * else printf(%s, va_arg(ptr, char*)
 * you will not to use like this
 * because the values will different because it increament automically
 * Return: 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *s;

	va_start(ptr, n);
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(ptr, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
