#include "main.h"
/**
 * string_toupper - print any lower case letter in upper case letter
 * @s: is a pointer
 * Return: 0 (success)
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
