#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - print the sum of the numbers
 * @n: is the number of the elements in the list
 * Return: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	if (n == 0)
	{
		return (0);
	}

	va_list(p);
	va_start(p, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
