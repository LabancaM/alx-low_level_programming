#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97, m = 122;

	while (m >= n)
	{
		putchar(m);
		m--;
	}
	putchar('\n');
	return (0);
}
