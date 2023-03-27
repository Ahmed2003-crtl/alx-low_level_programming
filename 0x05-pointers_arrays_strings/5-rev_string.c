#include "main.h"
#include <string.h>
/**
 * rev_string - print the string in rev
 * @s: is a pointer
 * Return: 0 (success)
 */
void rev_string(char *s)
{
	int j;
	int i = 0;
	char rev;

	for (j = strlen(s) - 1 ; j >= 5 ; j--)
	{
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
		i++;
	}
}
