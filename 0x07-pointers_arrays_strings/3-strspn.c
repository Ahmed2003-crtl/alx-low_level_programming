#include "main.h"
#include <string.h>
/**
 *  _strspn - print the number of that string
 *  @s: is a pointer
 *  @accept: is a pointer
 *  Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, l;
	int rev = 0;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (l = 0 ; s[l] != '\0' ; l++)
			if (s[l] == accept[i])
			{
				rev++;
			}
	}
	if ( rev == 0)
	{
		return (0);
	}
	else
	{
		return (strlen(s) - rev);
	}
}
