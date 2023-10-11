#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int  n, m , i, j;

	n = 48;
	while (n < 51)
	{
		m = 48;
		while (m < 58)
		{
			if (m == 52 && n == 50)
				break;
			i = 48;
			while (i < 54)
			{
				j = 48;
				while (j < 58)
				{
					_putchar(n);
					_putchar(m);
					_putchar(':');
					_putchar(i);
					_putchar(j);
					_putchar('\n');
					j++;
				}
				i++;
			}
			m++;
		}
		n++;
	}
	return ;
}
