#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - cal the res of the operation which  is between two numbers
 * @argc: is an int
 * @argv: is a pointer
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *opr = argv[2];
	int res;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(opr) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0 && *opr == '/') || (num2 == 0 && *opr == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(opr))(num1, num2);
	printf("%d\n", res);
	return (0);
}
