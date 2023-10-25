#include "main.h"

/**
 * factorial - compute factorial of a number
 *
 * @n: input integer
 * Return: factorial otherwise -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
