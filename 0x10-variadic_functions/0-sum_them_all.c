#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - compute sum of all number
 *
 * @n: number of numbers
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(ap, unsigned int);
		va_end(ap);
		return (sum);
	}
	return (0);
}
