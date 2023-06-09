#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all of the elements of the line commands arguments
 * @argc: is an int
 * @argv: is a pointer of chars
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
