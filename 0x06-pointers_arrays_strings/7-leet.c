#include "main.h"
/**
 * leet - writing funcition in encode 1337
 * @s: is a pointer
 * Return: 0 (success)
 */
char *leet(char *s)
{
	int i, l;
	char k[] = "'A', 'a', 'o', 'O', 'e', 'E', 't', 'T', 'l', 'L'";
	char num[] = "4, 4, 0, 0, 3, 3, 7, 7, 1, 1";

	for (i = 0 ; s[i] < '\0' ; i++)
	{
		for (l = 0 ; l < 10 ; l++)
			if (s[i] == k[l])
			{
				s[i] = num[l];
			}
	}
	return (s);
}
