#include "main.h"
/**
 * _strstr - print a string
 * @haystack: is a pointer
 * @needle: is a pointer
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, l;

	for (i = 0 ; needle[i] != '\0' ; i++)
	{
		for (l = 0 ; haystack[l] != '\0' ; l++)
		{
			if (haystack[l] == needle[i])
			{
				return (haystack + l);
			}
		}
	}
	return (NULL);
}
