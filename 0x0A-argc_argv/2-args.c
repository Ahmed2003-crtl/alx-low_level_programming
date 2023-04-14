#include "main.h"
/**
 * main - print all argc of the argv
 * @argc: is an int
 * @argv: is an array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
