#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all number
 *
 * @separator: seperator
 * @n: number of numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), separator);
		printf("%d", va_arg(ap, int));
		va_end(ap);
	}
	printf("\n");
}
