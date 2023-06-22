#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print the numbers of the list
 * @separator: is a pointer
 * @n: is an int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(R);
	va_start(R, n);
	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(R, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(R);
}
