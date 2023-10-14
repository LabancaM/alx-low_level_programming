#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _islower - lower case of alphabet
 *
 * Return: 1 if is upper case other wise 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
