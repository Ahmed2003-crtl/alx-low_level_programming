#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate the str
 * @str: is a str
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	int i;
	char *s = malloc(sizeof(char));

	if (s == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
