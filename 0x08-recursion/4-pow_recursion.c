#include "main.h"
/**
 * _pow_recursion - print result of number with his pow
 * @x: is a int
 * @y: is a int
 * Return: 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
