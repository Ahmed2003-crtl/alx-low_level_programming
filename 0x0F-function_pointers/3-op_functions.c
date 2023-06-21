#include<stdio.h>
#include"3-calc.h"
/**
 * op_add - add a and b
 * @a: is the first number
 * @b: is the second number
 * Return: 0 (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub a from b
 * @a: is the first number
 * @b: is the second number
 * Return: 0 (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: is the first number
 * @b: is the second number
 * Return: 0 (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a by b
 * @a: is the first number
 * @b: is the second number
 * Return: 0 (success)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of division a by b
 * @a: is the first number
 * @b: is the second number
 * Return: 0 (success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
