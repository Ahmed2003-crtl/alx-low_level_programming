#include<stdio.h>
#include<stdlib.h>
/**
 * main - print the name of the function
 * @argc: is the number of line commands arguments
 * @argv: is the array of the line commands arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

