#include "main.h"
/**
 *print_alphabet_x10 - print letters in lowercase ten times
 */
void print_alphabet_x10(void)
{
	char i;
	int o;

	for (o = 0 ; o < 10 ; o++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
