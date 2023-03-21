#include "main.h"
/**
 *print_sign - check if the number is greater than 0 or less than or equale
 *@n: the int is to be checked
 *Return: 0 (suceess)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
