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
	int a, n = 48, m, p, q;

	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			if (n == 57 && m == 57)
				break;
			p = 48;
			while (p <= 57)
			{
				q = p + 1;
				while (q <= 57)
				{
					putchar(n);
					putchar(m);
					putchar(32);
					putchar(p);
					putchar(q);
					putchar(44);
					/*
					a = 56;
					while (a > 0)		
					{
						a -= 12;
						putchar(a);
						if (a == 32)
							break;
					}
					*/
					q++;
				}
				p++;
			}
			m++;
		}
		n++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
