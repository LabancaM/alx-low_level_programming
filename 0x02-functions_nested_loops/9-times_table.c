#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				if ( i * j > 9)
				{
				 	_putchar((i * j) / 10 + 48);
				 	_putchar((i * j) % 10 + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(i * j + 48);
				}
				if (j >0 && j < 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
	return;		
}
