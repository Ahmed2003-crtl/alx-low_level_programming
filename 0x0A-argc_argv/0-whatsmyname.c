#include "main.h"
#include <string.h>
/**
 * main - print the name of the file
 * @argc: is an int
 * @argv: is an arr
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
