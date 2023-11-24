#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binay to integer base 10
 * @b: binary number
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, length, number = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	length = i - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			number += (1 << length);
		length--;
	}
	return (number);
}
