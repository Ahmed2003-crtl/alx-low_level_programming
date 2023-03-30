#include "main.h"
#include <string.h>
/**
 * _strncat - con two strings
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest , src , n));
}
