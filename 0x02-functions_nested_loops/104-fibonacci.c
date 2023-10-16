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
 * fibonacci - print the 98th fibonacci value
 *
 * Return: nothing
 */
void fibonacci(void)
{
	int n = 96, i = 0;
	long unsigned int f1 = 1, f2 = 2;
	long unsigned int f;

	printf("1, 2, ");
	while (i < n - 1)
	{
		f = f1 + f2;
		printf("%ld, ", f);
		f1 = f2;
		f2 = f;
		i++;
	}
	f = f1 + f2;
	printf("%ld\n", f);
}
