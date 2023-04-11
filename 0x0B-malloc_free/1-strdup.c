#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate the str
 * @str: is a str
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		s = malloc(sizeof(char) * (i + 1));
		if (s == NULL)
			return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
