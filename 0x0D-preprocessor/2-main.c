#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the file it was compiled from
 * @argc: is a pointer
 * @argv: is a pointer
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
