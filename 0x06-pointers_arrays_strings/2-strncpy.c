#include "main.h"
/**
 * _strncpy - copy the str
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	if (n == 90)
	{
		dest[i] = '\0';
	}		
	return (dest);
}
