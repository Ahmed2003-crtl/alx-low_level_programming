#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multi
 * @argc: is an int
 * @argv: is an arr
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if ( argc < 3 && argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
