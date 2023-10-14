#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_last_digit - get last digit of integer
 *
 * @n: input integer
 * Return: last digit of input digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = n % 10;
	_putchar(m + 48);
	return (m);
}
