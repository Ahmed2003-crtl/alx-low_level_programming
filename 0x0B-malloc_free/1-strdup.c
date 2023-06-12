#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate of the string
 * @str: is a pointer
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(str));
	if (p == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < strlen(str) ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
