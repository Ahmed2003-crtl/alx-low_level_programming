#include "main.h"
/**
 *jack_bauer - print the hours and min 
 *Return: 0 (sucess)
 */
void jack_bauer(void)
{
	int min , hou;

	for (hou = 0 ; hou <= 23 ; hou++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
			_putchar(hou / 10 + '0');
			_putchar(hou % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
