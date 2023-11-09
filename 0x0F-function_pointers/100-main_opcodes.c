#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (count < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + count));
		count++;
		if (atoi(argv[1]) > count)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
