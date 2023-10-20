#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: print triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int j, i;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			if (i <= size - j)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
