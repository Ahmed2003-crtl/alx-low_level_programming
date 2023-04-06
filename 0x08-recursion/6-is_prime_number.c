#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if the number is prime or not
 * @n: is an int
 * @i: is an int
 * Return: 0 (success)
 */
int squ(int n, int i);
int is_prime_number(int n)
{
	return (squ(n, 1));
}
/**
 * squ - cal the squ of the num
 * @n: is an int
 * @i: is an int
 * Return: 0 (success)
 */
int squ(int n, int i)
{
	if (i * i > n && n > 0)
	{
		return (1);
	}
	else if (i * i == n)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	return (squ(n, i + 1));
}
