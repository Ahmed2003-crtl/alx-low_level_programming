#include <stdio.h>
/**
 * main - print all base 11 numbers
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
