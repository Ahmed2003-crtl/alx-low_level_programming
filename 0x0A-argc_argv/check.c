#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
		char *t = argv[1];
		if (*t >= 'A' && *t <= 'z')
		{
			printf("digit");
			return (1);
		}
		else
		{
			printf("not");
		}
	return (0);
}
