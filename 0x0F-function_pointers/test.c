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
	printf ("%ld\n",strlen(opr));
	return (0);
}
