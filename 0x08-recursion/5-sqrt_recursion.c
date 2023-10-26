#include "main.h"

/**
 * square_root - compute the square root
 *
 * @n: the number which we compute the square root
 * @m: the second input
 * Return: the square root otherwise -1
 */
int square_root(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (square_root(n, ++m));
}
/**
 * _sqrt_recursion - square root of a number
 *
 * @n: first input integer
 * Return: square root of n otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 1));
}
