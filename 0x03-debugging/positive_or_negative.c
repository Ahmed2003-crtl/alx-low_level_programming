#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *positive_or_negative - check if the number is postivite or negative
 *@i: is an int
 *Return: 0 (success)
 */
void positive_or_negative(int i);

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
}
