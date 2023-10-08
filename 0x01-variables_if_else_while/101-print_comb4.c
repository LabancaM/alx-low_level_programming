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
	int a, n = 48, m, l;

	while (n <= 55)
	{
		m = n + 1;
		while (m <= 56 && m > n)
		{
			l = m + 1;
			while (l <= 57 && l > m)
			{
				putchar(n);
				putchar(m);
				if (n == 55 && m == 56 && l == 57)
					break;
				putchar(l);
				a = 56;
				while (a > 0)
				{
					a -= 12;
					putchar(a);
					if (a == 32)
						break;
				}
				l++;
			}
			m++;
		}
		n++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
