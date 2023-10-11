#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
