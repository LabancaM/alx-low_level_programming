#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_times_table - n*n  mulitipcation table
 *
 *@n: input integer
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	if (n == 0)
	{
		printf("0\n");
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				printf("0,");
			}
			else
			{
				if (i * j > 99)
				{
					printf(" %d", i * j);
				}
				else if (i * j > 9)
				{
					printf("  %d", i * j);
				}
				else
					printf("   %d", i * j);
				if (j > 0 && j < n)
					printf(",");
			}
		}
		printf("\n");
	}
}
