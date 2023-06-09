#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - cal the sum of numbers
 * @n: is an int
 * Return: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

