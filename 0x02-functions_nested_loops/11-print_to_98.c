#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print enter number to 98
 *
 * @n: input integer
 * Return: nothing
 */
void print_to_98(int n)
{
	int m = n;

	if (n < 98)
	{
		while (m < 98)
		{
			printf("%d, ", m);
			m++;
		}
	}
	else if (n > 98)
	{
		while ( m > 98)
		{
			printf("%d, ", m);
			m--;
		}
	}
	printf("98\n");
}
