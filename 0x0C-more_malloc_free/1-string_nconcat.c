#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "main.h"
/**
 * string_nconcat - concate two strings
 * @s1: is a char
 * @s2: is a char
 * @n: is an unsigned int
 * Return: 0 (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, t;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc((strlen(s1) + strlen(s2)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < strlen(s1) ; i++)
	{
		p[i] = s1[i];
	}
	if (n >= strlen(s2))
	{
		for (t = 0 ; t <= strlen(s2) ; t++)
		{
			p[i] = s2[t];
			i++;
		}
	}
	else
	{
		for (t = 0 ; t < n ; t++)
		{
			p[i] = s2[t];
			i++;
		}
		p[i] = '\0';
	}

	return (p);
}
