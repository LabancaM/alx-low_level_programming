#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
