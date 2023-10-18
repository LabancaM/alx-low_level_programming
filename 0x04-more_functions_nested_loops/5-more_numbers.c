#include "main.h"

/**
 * more_numbers - print digits exoeped 2 and 4
 *
 * Return: nothing 
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
				_putchar(i + 48);
			else
			{
				_putchar(i / 10);
				_putchar(i % 10);
			}
		}
		_putchar('\n');
	}
}
