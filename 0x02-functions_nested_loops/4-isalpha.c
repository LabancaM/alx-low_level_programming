#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 101) || (c > 47 && c < 58))
		return (1);
	return (0);
}
