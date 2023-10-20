#include "main.h"

/**
 * print_line - print n time underscore
 *
 * @n: n time to print
 * Return: nothing
 */
void print_line(int n)
{
	int j = 1;

	while (j > 0 && j <= n)
	{
		_putchar(95);
		j++;
	}
	_putchar('\n');
}
