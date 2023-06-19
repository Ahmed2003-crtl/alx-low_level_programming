#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the file it was compiled from
 * @argc: is a pointer
 * @argv: is a pointer
 * Return: 0 (success)
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
