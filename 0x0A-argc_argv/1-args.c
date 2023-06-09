#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of the line commands arguments
 * @argc: is the number of line command argument
 * @argv: is a pointer
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
