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
	char mot[]="char\n";
	int size, i;
	
	size = sizeof(mot) / sizeof(mot[0]);
	for (i = 0; i < size ; i++)
	{
		_putchar(mot[i]);
	}

	return (0);
}
