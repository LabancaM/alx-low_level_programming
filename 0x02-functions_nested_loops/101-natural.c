#include <stdio.h>
#include <stdlib.h>

int sum_natural(void);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	sum_natural();
	return (0);
}

/**
 * sum_natural - compute the addition of 3 and 5 multiple
 *
 * Return: result of 3 and 5 multiple addition
 */
int sum_natural(void)
{
	int n = 1024, i, sum = 0;
	
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (sum);

}
