#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of argument in command line
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, sum = 0, j, value[] = {25, 10, 5, 2, 1};

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i > 1)
	{
		for (j = 0; j < 5; j++)
		{
			while (i >= value[j])
			{
				sum++;
				i -= value[j];
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
