#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * function print_alphabet - Entry point
 *
 * print alphabet in lower case
 *
 * Return: nothing (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
