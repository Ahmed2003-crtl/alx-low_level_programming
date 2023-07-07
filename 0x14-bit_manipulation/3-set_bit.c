#include<stdio.h>
#include<stdlib.h>
#include"main.h"
int len(int u);
/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: is a pointer
 * @index: is an int
 * Return: 0 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i, j, l = len(*n);
        unsigned int count = 0;

        if (n == NULL)
                return (-1);
        for (i = l - 1 ; i >= 0 ; i--)
        {
                n[i] = n % 2;
                n = n / 2;
        }
        for (j = 0 ; j < l ; j++)
        {
                if (count == index)
                        p[i] = 1;
                count++;
        }

        return (-1);
}
/**
 * len - calculate the len of any number
 * @u: is an int
 * Return: 0 (success)
 */	
