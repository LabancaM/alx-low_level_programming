#include <stdio.h>
#include <stdlib.h>

void fibonacci(void);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();
	return (0);
}

/**
 * sum_natural - compute the addition of 3 and 5 multiple
 *
 * Return: result of 3 and 5 multiple addition
 */
void fibonacci(void)
{
	int n = 50, i = 0;
	long int f1 = 1, f2 = 2;
	long int f;

	while (i < n-1)
	{
		if (i == 0)
		{
			printf("%ld, ", f1);
			i++;
			continue;
		}
		if (i == 1)
		{
			printf("%ld, ", f2);
			i++;
			continue;
		}
		f = f1 + f2;
		printf("%ld, ", f);
		f1 = f2;
		f2 = f;
		i++;
	}
	f = f1 + f2;
	printf("%ld\n", f);
}
