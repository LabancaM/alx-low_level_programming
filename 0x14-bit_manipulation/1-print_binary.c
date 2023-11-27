#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: unsigned integer
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	int i, length = 0;
	unsigned long int new;

	new = 1 << length;
	while (new < n)
	{
		length++;
		new = 1 << length;
	}
	if (new > n && length > 0)
		length--;
	for (i = length; i > -1; i--)
	{
		new = 1 << i;
		if(n >= new)
		{
			_putchar('1');
			n -= new;
		}
		else
			_putchar('0');
	}
}
