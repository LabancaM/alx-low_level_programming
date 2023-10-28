#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _abs - find absolute value of a number
 *
 * @n: input integer
 * Return: n absolute integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
