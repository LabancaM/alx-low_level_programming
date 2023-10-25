#include "main.h"

/**
 * is_prime_number - check if number is prime number
 *
 * @n: first input integer
 * Return: 1 if number is prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n / (n - 1) != 0)
		return (1 + is_prime_number(n-1));
	else
		return (0);
}
