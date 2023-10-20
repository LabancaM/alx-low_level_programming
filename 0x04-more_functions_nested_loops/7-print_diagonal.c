#include "main.h"

/**
 * print_diagonal - print n time antislash
 *
 * @n: n time to print
 * Return: nothing
 */
void print_diagonal(int n)
{
	int j = 1, i;

	if (n <= 0)
		_putchar('\n');
	while (j > 0 && j <= n)
	{
		i = 1;
		while (i < j)
		{
			_putchar(' ');
			i++;
		}
		_putchar(92);
		_putchar('\n');
		j++;
	}
}
