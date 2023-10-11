#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int m = n;

	if (n < 98)
	{
		while (m < 98)
		{
			if (m < 10)
				_putchar(m+48);
			_putchar(',');
			_putchar(' ');
			m++;
		}
	}
	else if (n > 98)
	{
		while ( m > 98)
		{
			printf("%d, ", m);
			_putchar(',');
			_putchar(' ');
			m--;
		}
	}
	printf("98\n");
}
