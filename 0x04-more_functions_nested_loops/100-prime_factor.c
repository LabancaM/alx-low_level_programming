#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, n = 612852475143, m = 782849;

	for (i = 3; i < m; i += 2)
	{
		while (n % i == 0 && n != i)
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
