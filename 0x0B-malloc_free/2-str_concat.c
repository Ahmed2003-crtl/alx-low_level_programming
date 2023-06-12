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

	p = (char *) malloc(sizeof(s1) + sizeof(s2));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL || s2 == NULL)
	{
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

