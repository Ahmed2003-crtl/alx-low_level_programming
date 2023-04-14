#include "main.h"
/**
 * main - print the number of argc
 * @argc: is an int
 * @argv: is an array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
