#include "3-calc.h"
#include "stdio.h"
/**
 * op_add - print the sum of two numbers
 * @a: is an int
 * @b: is an int
 * Return: 0 (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - print the sub of two numbers
 * @a: is an int
 * @b: is an int
 * Return: 0 (success)
 */
int op_sub(int a, int b)
{
	if ((a - b) > 0)
		return (a - b);
	else
		return (-(a - b));
}
/**
 * op_mul - print the mul of two numbers
 * @a: is an int
 * @b: is an int
 * Return: 0 (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - print the div of two numbers
 * @a: is an int
 * @b: is an int
 * Retun: 0 (success)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - print the mod of two numbers
 * @a: is an int
 * @b: is an int
 * Return: 0 (success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}

