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
	int t = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
		while (s2[t] != '\0')
		{
			t++;
			s = malloc(sizeof(char) * (i + t + 1));
			if (s == NULL)
				return (NULL);
		}
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		s[i] = s1[i];
	}
	for (t = 0 ; s2[t] != '\0' ; t++)
	{
		s[i] = s2[t];
		i++;
	}
	s[i] = '\0';
	return (s);
}
