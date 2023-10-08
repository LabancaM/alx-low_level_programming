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
	int a, n = 48, m;

	while (n <= 56)
	{
		m = n + 1;
		while (m <= 57)
		{
			putchar(n);
			if (n == 56 && m == 57)
				break;
			putchar(m);
			
			a = 56;
			while (a > 0)
			{
				a -= 12;
				putchar(a);
				if (a == 32)
					break;
			}
			m++;
		}
		n++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
