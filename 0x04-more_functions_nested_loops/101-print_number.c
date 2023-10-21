#include "main.h"

/**
 * print_triangle - print number
 *
 * @n: input  number
 * Return: nothing
 */
void print_number(int n)
{
	int a, cpt = 1, p, l;
	int m, k;

	if (n < 0)
	{
		_putchar(45);
		n = -1 * n;
	}
	a = n, l = n;
	while (a / 10){
		a /= 10;
		cpt++;
	}
	p = cpt - 1;
	while (p > 0)
	{
		m = 1;
		k = p;
		while ( k--)
			m *= 10;
		_putchar(l / m + 48);
		l = l % m;
		p--;
	}
	_putchar(n % 10 + 48);
}
