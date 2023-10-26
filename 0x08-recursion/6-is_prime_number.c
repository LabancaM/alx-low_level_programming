#include "main.h"

/**
 * prime - check if is prime
 *
 * @n: the number will check
 * @m: second input
 * Return: 1 if is prime otherwise 0
 */
int prime(int n, int m)
{
	if (n % m == 0 && n != m)
		return (0);
	if (n == m)
		return (1);
	return (prime(n, ++m));
}
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
	return (prime(n, 2));
}
