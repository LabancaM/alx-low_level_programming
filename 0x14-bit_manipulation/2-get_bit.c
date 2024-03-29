#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned integer
 * @index: index of bit
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n >>= index;
	if(n & 1)
		return (1);
	else
		return (0);
	return (-1);
}
