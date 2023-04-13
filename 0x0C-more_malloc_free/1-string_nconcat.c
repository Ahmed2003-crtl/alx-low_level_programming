#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concate two str
 * @s1: is a str
 * @s2: is a str
 * @n: is an int
 * Return: 0 (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n < strlen(s2))
	{
		s = malloc(sizeof(char) * (n + strlen(s1) + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (strlen(s2) + strlen(s1) + 1));
	}
	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < strlen(s1) ; i++)
		s[i] = s1[i];
	if (n < strlen(s2))
	{
		for (j = 0 ; j < n ; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0 ; j < strlen(s2) ; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
