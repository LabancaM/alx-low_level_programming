#include <stdio.h>
#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: unsigned integer number
 * @index: index
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
