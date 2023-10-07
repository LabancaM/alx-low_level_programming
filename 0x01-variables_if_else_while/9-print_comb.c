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
	int a, n = 48, m = 57;

	while (n < m)
	{
		putchar(n);
		a = 56;
		while (a > 0)
		{
			a -= 12;
			putchar(a);
			if (a == 32)
				break;
		}
		n++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
