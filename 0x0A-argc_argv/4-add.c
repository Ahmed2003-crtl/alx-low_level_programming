#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - calculate the addition of the number in the line command argument
 * @argc: is the number of line commands arguments
 * @argv: is the pointer of arr
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int res = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else
		for (i = 0 ; i < argc ; i++)
		{
			char *t = argv[i];

			if ((*t  >= 'A' && *t <= 'Z') || (*t >= 'a' && *t <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				res = res + atoi(argv[i]);
			}
		}
	printf("%d\n", res);
	return (0);
}
