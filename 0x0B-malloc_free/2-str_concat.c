#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"main.h"
/**
 * str_concat -  concatenates two strings.
 * @s1: is a pointer
 * @s2: is a pointer
 * Return: 0 (success)
 */
char *str_concat(char *s1, char *s2)
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
	p = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < strlen(s1) ; i++)
	{
		p[i] = s1[i];
	}
	for (t = 0 ; t <= strlen(s2) ; t++)
	{
		p[i] = s2[t];
		i++;
	}
	return (p);
}

