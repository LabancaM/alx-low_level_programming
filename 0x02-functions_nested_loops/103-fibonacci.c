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
 * fibonacci - print the 50th fibonacci value
 *
 * Return: nothing
 */
void fibonacci(void)
{
	long int f1 = 1, f2 = 2;
	long int f = 2, sum = 2;

	while ( f <= 4000000)
	{
		f = f1 + f2;
		if (f % 2 == 0)
			sum += f;
		f1 = f2;
		f2 = f;
	}
	printf("%ld\n", sum);
}
