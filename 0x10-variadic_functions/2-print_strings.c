#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - print all string
 *
 * @separator: seperator
 * @n: number of numbers
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%s%s", va_arg(ap, char *), separator);
		printf("%s", va_arg(ap, char *));
		va_end(ap);
	}
	printf("\n");
}
