#include "main.h"
/**
 * cap_string - cap every letter
 * @s: is a pointer
 * Return: 0 (success)
 */
char *cap_string(char *s)
{
	int i, k;
	char v[] = {' ', '\t', '\n', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (k = 0 ; k < 13 ; k++)
		{
			if (v[k] == s[i - 1] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				break;
			}
		}
	}
	return (s);
}

