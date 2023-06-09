#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate the muplication of two numbers
 * @argc: is an int
 * @argv: is a pointer
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int num_1;
	int num_2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);

	res = num_1 * num_2;
	printf("%d\n", res);
	return (0);
}

