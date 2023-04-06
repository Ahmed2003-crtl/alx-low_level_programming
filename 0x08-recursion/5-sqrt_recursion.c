#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - print the sqr for a num
 * @n: is a int
 * @i: is a int
 * Return: 0 (success)
 */
int squ(int n, int i);
int _sqrt_recursion(int n)
{
	return (squ(n, 1));
}
/**
 * squ - print the sqr for a num
 * @n: is an int
 * @i: is an int
 * Return: 0 (success)
 */
int squ(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		squ(n, i + 1);
	}
	else
		return (-1);
}

