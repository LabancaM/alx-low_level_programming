#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mot[] = "putchar";
	int size, i;
	_putchar(95);
	size = sizeof(mot) / sizeof(mot[0]);
	for (i = 0; i < size; i++)
	{
		_putchar(mot[i]);
	}
	_putchar('\n');	
	return (0);
}
