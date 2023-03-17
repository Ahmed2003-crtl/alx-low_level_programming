#include <stdio.h>
/**
 * main - print the letter expect e and q
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
}
	putchar('\n');
	return (0);
}
