#include <stdio.h>
/**
 * main - write the letters in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
