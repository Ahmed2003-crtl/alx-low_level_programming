#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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

	}
	else
		for (i = 1 ; i < argc ; i++)
		{
			char *t = argv[i];
			unsigned int count;

			for (count = 0 ; count < strlen(t) ; count++)
			{
				if (!isdigit(t[count]))
				{
					printf("Error\n");
					return (1);
				}
			}
			res = res + atoi(argv[i]);
		}
	printf("%d\n", res);
	return (0);
}
