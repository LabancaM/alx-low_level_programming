#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _isalpha - check if caracter is alpha
 *
 * @c: input caracter
 *
 * Return: 1 if caracter is alpha otherwise 0
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 101))
		return (1);
	return (0);
}
