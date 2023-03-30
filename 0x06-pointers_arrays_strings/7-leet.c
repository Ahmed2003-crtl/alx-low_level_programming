#include "main.h"
/**
 * leet - writing funcition in encode 1337
 * @s: is a pointer
 * Return: 0 (success)
 */
char *leet(char *s)
{
	int i, l;
	char k[] = "AaoOeEtTlL";
	char num[] = "4400337711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (l = 0 ; l < 10 ; l++)
			if (s[i] == k[l])
			{
				s[i] = num[l];
			}
	}
	return (s);
}
