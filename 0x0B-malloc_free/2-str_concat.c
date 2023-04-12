#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concante two str
 * @s1: is a str
 * @s2: is a str
 * Return: 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int t;
	char *s;

	while (s1[i] != '\0')
	{
		i++;
		s = malloc(sizeof(char) * (i + 1));
		if (s == NULL)
			return (NULL);
	}
	for (i = 0 ; s1[i] ; i++)
	{
		if (s1[i] == '\0')
		{
			s1[i] = ' ';
		}
		s[i] = s1[i];
	}
	for (t = 0 ; s2[t] ; t++)
	{
		s[i] = s2[t];
		i++;
	}
	return (s);
}
