#include "main.h"
#include <stdlib.h>
/**
 * create_array - check if the letter is exit in sentence
 * @size: is an unsigned int
 * @c: is a char
 * Return: 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}


