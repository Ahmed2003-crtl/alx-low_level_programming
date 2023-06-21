#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - get the result of the operation which should be executed
 * @s: is a pointer
 * Return: 0 (success)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
