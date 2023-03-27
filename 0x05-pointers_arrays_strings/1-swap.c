#include "main.h"
/**
 * swap_int - swap the numbers
 * @a: is a pointer
 * @b: is a pointer
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int kat;

	kat = *a;
	*a = *b;
	*b = kat;
}
