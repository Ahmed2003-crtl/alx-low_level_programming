#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - print the numbers
 * @separator: is char
 * @n: is an int
 * Return: 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d ", va_arg(ptr, int));
		else
			printf("%d%s ", va_arg(ptr, int), separator);
	}
	printf("\n");
	va_end(ptr);
}
