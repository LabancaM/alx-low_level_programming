#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: number of argument in command line
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
